#include <stdio.h>
#include <time.h>

int main() {
    clock_t start = clock();

    // 실행 시간을 측정할 작업 수행...

    clock_t end = clock();
    double cpu_time_used = (double)(end - start) / CLOCKS_PER_SEC;

    printf("작업 실행 시간: %f 초\n", cpu_time_used);

    return 0;
}
