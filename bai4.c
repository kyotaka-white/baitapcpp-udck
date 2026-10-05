#include <stdio.h>

int main() {
    float l, w;
    printf("Nhap chieu dai va chieu rong hinh chu nhat : ");
    scanf("%f %f", &l, &w);
    printf("Chu Vi: %.2f\n", (l + w) * 2); 
    printf("Dien Tich: %.2f\n", l * w);
    return 0;
}