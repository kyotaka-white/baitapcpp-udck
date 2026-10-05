#include <stdio.h>

int main() {
    float pi = 3.14; 
    float r = 5.5;
    float cv = 2 * pi * r;
    float s = pi * r * r;

    printf("Ban kinh: %.2f\n", r);
    printf("Chu vi hinh tron: %.2f\n", cv);
    printf("Dien tich hinh tron: %.2f\n", s);

    return 0;
}