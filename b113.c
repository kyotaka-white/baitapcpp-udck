#include <stdio.h>
int SNT(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) 
        if (n % i == 0) return 0;
    return 1; }
void nhap(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]); }
    }
int main() {
    int n, a[100], dem = 0;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    nhap(a, n);
    printf("Cac so nguyen to: ");
    for (int i = 0; i < n; i++) {
        if (SNT(a[i])) {
            printf("%d ", a[i]);
            dem++; }
    }
    printf("\nTong cong: %d so", dem);
    return 0;
}