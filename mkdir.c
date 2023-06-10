#include <stdio.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("사용법: %s 디렉터리_이름\n", argv[0]);
        return 1;
    }

    if (mkdir(argv[1], 0755) == -1) {
        perror("디렉터리 생성 실패");
        return 1;
    }

    printf("디렉터리가 생성되었습니다.\n");

    return 0;
}
