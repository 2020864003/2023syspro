#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("사용법: %s 원본_경로 대상_경로\n", argv[0]);
        return 1;
    }

    if (rename(argv[1], argv[2]) == -1) {
        perror("파일 이동/이름 변경 실패");
        return 1;
    }

    printf("파일이 이동/이름 변경되었습니다.\n");

    return 0;
}
