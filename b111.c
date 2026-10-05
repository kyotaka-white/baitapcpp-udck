#include <stdio.h>

void nhapMang(int a[], int *n) {
    do {
        printf("Nhap so luong phan tu n (0 < n <= 100): ");
        scanf("%d", n);
        if (*n <= 0 || *n > 100) {
            printf("Gia tri n khong hop le. Vui long nhap lai!\n");
        }
    } while (*n <= 0 || *n > 100);
    for (int i = 0; i < *n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void xuatMang(int a[], int n) {
    printf("\nMang vua nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}
int tinhTong(int a[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += a[i];
    }
    return tong;
}
float tinhTrungBinh(int a[], int n) {
    if (n == 0) return 0;
    return (float)tinhTong(a, n) / n;
}
int main() {
    int n, a[100];
    nhapMang(a, &n);
    xuatMang(a, n);
    int tong = tinhTong(a, n);
    printf("\nTong cac phan tu: %d", tong);
    float tb = tinhTrungBinh(a, n);
    printf("\nTrung binh cong: %.2f\n", tb);
    return 0;
}