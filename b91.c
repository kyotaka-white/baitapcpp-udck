#include <stdio.h>
int Tong(int n) {
    if (n < 10) return n;
    else return (n % 10) + Tong(n / 10);
}
int main() {
    int n;
    printf("Nhap so nguyen dương : ");
    scanf("%d", &n);
    printf("Tổng các chữ số của %d là: %d\n", n, Tong(n));
    return 0;
}