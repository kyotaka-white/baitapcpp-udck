#include <stdio.h>

int main() {
    int n, tong = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        tong += (2 * i - 1) - (2 * i);
    }
    printf("Ket qua bieu thuc la: %d\n", tong);
    return 0;
}