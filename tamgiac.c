#include <stdio.h>

int main() {
    float a, b, c;

    printf("Nhap vao do dai 3 canh: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        
        if (a == b && b == c) {
            printf("Day la tam giac deu.\n");
        } 
        else if ((a == b || b == c || a == c) && (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)) {
            printf("Day la tam giac vuong can.\n");
        } 
        else if (a == b || b == c || a == c) {
            printf("Day la tam giac can.\n");
        } 
        else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
            printf("Day la tam giac vuong.\n");
        } 
        else {
            printf("Day la tam giac thuong.\n");
        }
    } else {
        printf("Ba canh nay khong tao thanh mot tam giac.\n");
    }

    return 0;
}