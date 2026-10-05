#include <stdio.h>

int main() {
    int n, a = 1, b = 1, Next;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 3; i <= n; i++) {
        Next = a + b;
        a = b;
        b = Next;
    }
    printf("So hang thu %d la: %d\n", n, (n < 3) ? 1 : b);
    return 0;
}