#include <stdio.h>

float TongS(int n, float x) {
    float tong = 1.0; 
    float soHangHienTai = 1.0;

    for (int i = 1; i <= n; i++) {
        soHangHienTai = soHangHienTai * (x / i);
        tong += soHangHienTai;
    }
    return tong;
}

int main() {
    int n;
    float x;

    printf("Nhap n và x: ");
    scanf("%d %f", &n, &x);
    printf("Gia tri S(%d, %.2f) = %.4f\n", n, x, TongS(n, x));
    return 0;
}