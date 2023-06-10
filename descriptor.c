#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()

{

        int fd;

        if( (fd = open("test.txt", O_RDONLY)) < 1 )

  {

                printf("open() error");

                exit(1);

        }



        printf("FD : %d\n", fd); 



        close(fd);

        return 0;

}
