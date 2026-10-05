#include <stdio.h>

int main() {
    int so, BanDau, tong = 0, ChuSo;

    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &so);

    BanDau = so;

    while (so > 0) {
        ChuSo = so % 10;
        tong += ChuSo * ChuSo * ChuSo;
        so /= 10;
    }

    if (tong == BanDau) {
        printf("%d la so Armstrong.\n", BanDau);
    } else {
        printf("%d khong phai la so Armstrong.\n", BanDau);
    }
    return 0;
}