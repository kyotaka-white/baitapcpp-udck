#include <stdio.h>

int UCLN(int a, int b) {
    while (b != 0) {
        int du = a % b;
        a = b;
        b = du;
    }
    return a;
}

int BCNN(int a, int b) {
    if (a * b == 0) return 0; 
    return (a * b) / UCLN(a, b);
}

int main() {
    int x, y;
    printf("Nhap a: ");
    scanf("%d", &x);
    printf("Nhap b : ");
    scanf("%d", &y);

    printf("UCLN: %d\n", UCLN(x, y));
    printf("BCNN: %d\n", BCNN(x, y));

    return 0;
}