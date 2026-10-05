#include <stdio.h>

int main() {
    int n;
    int giai_thua = 1; 
    printf("Nhap vao mot so n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        giai_thua = giai_thua * i;
    }
    printf("Ket qua: %d\n", giai_thua);
    return 0;
}