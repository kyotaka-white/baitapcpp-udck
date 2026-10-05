#include <stdio.h>

int main() {
    int d, m, y;

    printf("Nhập ngày tháng năm: ");
    scanf("%d %d %d", &d, &m, &y);

    printf("Ngày tháng năm: %02d/%02d/%04d\n", d, m, y);
    return 0;
}