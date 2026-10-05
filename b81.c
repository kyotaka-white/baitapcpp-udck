#include <stdio.h>

int hoan_hao(int n) {
    int tong = 0;
    for (int i = 1; i < n; i++) 
        if (n % i == 0) tong += i;
    return tong == n;
}
int SNT(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) 
        if (n % i == 0) return 0;
    return 1;
}
int main() {
    int n;
    printf("Nhap n: "); scanf("%d", &n);
    printf("%d %s so hoan hao\n", n, hoan_hao(n) ? "la" : "khong la");
    printf("SNT nho hon %d: ", n);
    for (int i = 2; i < n; i++) 
        if (SNT(i)) printf("%d ", i);
    return 0;
}