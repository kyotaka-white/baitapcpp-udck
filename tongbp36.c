#include <stdio.h>

int main() {
    int n;
    int tongbp = 0;
    int i;

    printf("Nhap vao so nguyen N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            tongbp = tongbp + (i * i);
        }
    }
    printf("Tong binh phuong cac so le tu 1 den %d la: %d\n", n, tong_binh_phuong);
    return 0;
}