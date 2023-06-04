#include<stdio.h>
#include<string.h>                            
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc, char ** argv){
    int fd;
    char * inputData = (char *)malloc(sizeof(char) * 1024);
    char * fileName = (char *)malloc(sizeof(char) *1024);
           
        memset(inputData, 0, 1024);
    memset(fileName, 0, 1024);
   
    strcpy(fileName, argv[1]);
    if( (fd = open(fileName, O_WRONLY | O_APPEND)) < 1){
        printf("File Not Exist\n");
        exit(1);    
    }
    printf("Input data to append the file : ");    
    scanf("%s", inputData);    
    write(fd, inputData, strlen(inputData));
 
    close(fd);
    free(inputData);
    free(fileName);
    return 0;
}
