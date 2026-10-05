#include <stdio.h>

int main() {
    float day, h;
    printf("Nhap canh day va chieu cao : ");
    scanf("%f %f", &day, &h);
    printf("Dien Tich: %.2f\n", (day * h) / 2);
    return 0;
}