#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d ,x1, x2;
    printf("Nhap a : "); scanf("%f",&a);
    printf("Nhap b : "); scanf("%f",&b);
    printf("Nhap c : "); scanf("%f",&c);

    if (a == 0) {
        if (b == 0) puts(c == 0 ? "Vo so nghiem" : "Vo Nghiem");
        else printf("%.2f\n", -c / b);
        return 0;
    }

    d = b * b - 4 * a * c;
    if (d < 0) puts("Vo Nghiem");
    else if (d == 0) printf("PT co nghiem kep x = %.2f\n", -b / (2 * a));
    if (d > 0) {
        x1 = (-b + sqrt(d)/(2 * a));
        x2 = (-b - sqrt(d)/(2 * a));
    }
    return 0;
}