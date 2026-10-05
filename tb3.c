#include <stdio.h>

int main() {
    int n;
    int tb_3 = 0;
    int i;

    printf("Nhap vao so nguyen N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        tb_3 = tb_3 + (i * i * i);
    }
    printf("Tong bac 3 cua %d so dau tien la: %d\n", n, tb_3);
    return 0;
}