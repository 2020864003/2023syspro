#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("사용법: %s 파일1 파일2 ...\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        if (remove(argv[i]) == -1) {
            perror("파일 삭제 실패");
        } else {
            printf("%s 파일이 삭제되었습니다.\n", argv[i]);
        }
    }

    return 0;
}
