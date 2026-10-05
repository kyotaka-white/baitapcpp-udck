#include <stdio.h>
#include <math.h>

float tinhTron(float r) { return 3.14 * r * r; }
float tinhHCN(float d, float r) { return d * r; }
float tinhTG(float a, float b, float c) {
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    int chon;
    float a, b, c;

    do {
        printf("\n--- MENU: 1.Tron | 2.HCN | 3.TamGiac | 0.Thoat ---\nChon: ");
        scanf("%d", &chon);
        switch (chon) {
            case 1: 
                printf("Nhap ban kinh: "); scanf("%f", &a);
                printf("=> S = %.2f\n", tinhTron(a)); break;
            case 2: 
                printf("Nhap dai, rong: "); scanf("%f %f", &a, &b);
                printf("=> S = %.2f\n", tinhHCN(a, b)); break;
            case 3: 
                printf("Nhap 3 canh: "); scanf("%f %f %f", &a, &b, &c);
                printf("=> S = %.2f\n", tinhTG(a, b, c)); break;
            case 0: printf("Tam biet!\n"); break;
            default: printf("Chon sai, nhap lai!\n");
        }
    } while (chon != 0);
    return 0;
}