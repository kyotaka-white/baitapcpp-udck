#include <stdio.h>

int main() {
    int n, d1, d2, d3, rv;

    printf("Nhập 3 chữ số nguyên : ");
    scanf("%d", &n);

    d1 = n % 10;          
    d2 = (n / 10) % 10;   
    d3 = n / 100;         
    rv = d1 * 100 + d2 * 10 + d3;

    printf("Đảo Ngược Số: %d\n", rv);

    return 0;
}