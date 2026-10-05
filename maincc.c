#include <stdio.h>
int main() {
    int n;
    float tong = 0; 
    int i;
    printf("Nhap N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        tong = tong + (1.0 / i);
    }
    printf("Tong S = 1 + 1/2 + ... + 1/%d la: %.2f\n", n, tong);
    return 0;
}