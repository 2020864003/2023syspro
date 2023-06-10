#include <stdio.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("사용법: %s 파일_이름 퍼미션\n", argv[0]);
        return 1;
    }

    char *filename = argv[1];
    char *permission_str = argv[2];
    int permission = strtol(permission_str, NULL, 8);

    if (chmod(filename, permission) == -1) {
        perror("퍼미션 변경 실패");
        return 1;
    }

    printf("퍼미션이 변경되었습니다.\n");

    return 0;
}
