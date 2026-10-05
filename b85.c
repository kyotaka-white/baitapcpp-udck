#include <stdio.h>

void chuyenNhiPhan(int n) {
    int mangNhiPhan[32];
    int chiSo = 0;
    
    if (n == 0) {
        printf("0");
        return;
    }
    while (n > 0) {
        mangNhiPhan[chiSo] = n % 2; 
        n = n / 2;                  
        chiSo++;                    
    }
    printf("Ket qua nhi phan: ");
    for (int i = chiSo - 1; i >= 0; i--) {
        printf("%d", mangNhiPhan[i]);
    }
    printf("\n");
}

int main() {
    int soNhap;

    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &soNhap);

    if (soNhap < 0) {
        printf("Vui long nhap so nguyen duong!\n");
    } else {
        chuyenNhiPhan(soNhap);
    }
    return 0;
}