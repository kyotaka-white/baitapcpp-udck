#include <stdio.h>
#include <math.h>
int GiaiPT(double a, double b, double c, double *x1, double *x2) {
    if (a == 0) { 
        if (b == 0) return 0;
        *x1 = -c / b;
        return 1;
    }
    double delta = b * b - 4 * a * c;
    if (delta < 0) return 0;  
    if (delta == 0) {
        *x1 = -b / (2 * a);
        return 1;
    }
    double s_delta = sqrt(delta);
    *x1 = (-b + s_delta) / (2 * a);
    *x2 = (-b - s_delta) / (2 * a);
    return 2;
}
int main() {
    double a, b, c, x1, x2;
    printf("Nhap a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    int ret = GiaiPT(a, b, c, &x1, &x2);
    if (ret == 0) printf("Vo nghiem.\n");
    else if (ret == 1) printf("Nghiem: x = %.2f\n", x1);
    else printf("2 nghiem: x1 = %.2f, x2 = %.2f\n", x1, x2);
    return 0;
}