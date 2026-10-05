#include <stdio.h>
void xuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", a[i]); {
    printf("\n"); }
}
void xoaPhanTu(int a[], int *n, int k) {
    for (int i = k; i < *n - 1; i++) {
        a[i] = a[i + 1];
    (*n)--; }
}
void themPhanTu(int a[], int *n, int k, int x) {
    for (int i = *n - 1; i >= k; i--) {
        a[i + 1] = a[i];
    a[k] = x; 
    (*n)++;   }
}
int main() {
    int n, a[100], k, x;
    printf("Nhap n: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i); scanf("%d", &a[i]); }
    printf("\nNhap vi tri k can xoa (0 <= k < %d): ", n);
    scanf("%d", &k);
    if (k >= 0 && k < n) {
        xoaPhanTu(a, &n, k);
        printf("Mang sau khi xoa: "); xuatMang(a, n);
    }
    printf("\nNhap gia tri x can them: "); scanf("%d", &x);
    printf("Nhap vi tri k can chen (0 <= k <= %d): ", n);
    scanf("%d", &k);
    if (k >= 0 && k <= n && n < 100) {
        themPhanTu(a, &n, k, x);
        printf("Mang sau khi them: "); xuatMang(a, n);
    }
    return 0;
}