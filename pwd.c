#include <stdio.h>
#include <unistd.h>

#define MAX_PATH 1024

int main() {
    char path[MAX_PATH];

    if (getcwd(path, MAX_PATH) == NULL) {
        perror("현재 작업 디렉터리 가져오기 실패");
        return 1;
    }

    printf("%s\n", path);

    return 0;
}
