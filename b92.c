#include <stdio.h>
void nghichdao(int n) {
    if (n < 10) {
        printf("%d", n);
        return;
    }
    printf("%d", n % 10);
    nghichdao(n / 10);
}
int main() {
    int n;
    printf("Nhập số nguyên dương n: ");
    scanf("%d", &n);
    printf("Số nghịch đảo của %d là: ", n);
    nghichdao(n);
    printf("\n");
    return 0;
}