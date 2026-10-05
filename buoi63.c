#include <stdio.h>

int main() {
    int a, b;
    int du;
    
    printf("Nhap a va b: ");
    scanf("%d %d", &a, &b);
    
    while (b != 0) {
     du = a % b;
        a = b;
        b = du;
    }
    
    printf("UCLN la: %d\n", a);
    return 0;
}