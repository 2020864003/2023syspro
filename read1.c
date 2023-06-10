#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

int main() {
    int fd = open("file.txt", O_RDONLY); // 읽을 파일 열기
    if (fd == -1) {
        perror("파일 열기 실패");
        return 1;
    }

    char buffer[BUFFER_SIZE];
    ssize_t bytesRead = read(fd, buffer, BUFFER_SIZE);
    if (bytesRead == -1) {
        perror("파일 읽기 실패");
        close(fd);
        return 1;
    }

    close(fd);

    printf("읽은 데이터:\n");
    fwrite(buffer, 1, bytesRead, stdout);

    return 0;
}
