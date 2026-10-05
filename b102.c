#include <stdio.h>
void HCN(float dai, float rong, float *chuVi, float *dienTich) {
    *chuVi = (dai + rong) * 2;
    *dienTich = dai * rong;
}
void main() {
    float d, r, cv, dt;
    printf("Nhap chieu dai: ");
    scanf("%f", &d);
    printf("Nhap chieu rong: ");
    scanf("%f", &r);
    HCN(d, r, &cv, &dt);
    printf("\n--- Ket qua ---\n");
    printf("Chu vi hinh chu nhat: %.2f\n", cv);
    printf("Dien tich hinh chu nhat: %.2f\n", dt);
}