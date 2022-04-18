#include <unistd.h>
#include <stdio.h>

int main () {
    int n = 5;

    while(n--) {
	    if (!fork()) {
	        execlp("date", "date", (char *)0);
		// never reached
	    }
            sleep(1);
    }

    printf("Ok, el ls ha terminado.\n");
}
