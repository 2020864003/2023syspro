#include <stdio.h>
#include <stdlib.h>>

int retval = 0;

        printf("Content-type:text/html \n\n");

        printf("test");

        retval = system("pwd");
        printf("<br><br>pwd =%d\n <br>", retval);
