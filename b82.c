#include <stdio.h>

float bmi(float can_nang, float chieu_cao) {
    return can_nang / (chieu_cao * chieu_cao);
}
void phan_loai_bmi(float bmi) {
    printf("Chi so BMI: %.2f\n", bmi);
    printf("Phan loai: ");  
    if (bmi < 18.5) printf("Thieu can\n");
    else if (bmi < 25) printf("Binh thuong\n");
    else if (bmi < 30) printf("Thua can\n");
    else printf("Beo phi\n");
}

int main() {
    float can_nang, chieu_cao;
    printf("Nhap can nang (kg): ");
    scanf("%f", &can_nang);
    printf("Nhap chieu cao (m): ");
    scanf("%f", &chieu_cao);
    if (chieu_cao > 0) {
        phan_loai_bmi(bmi(can_nang, chieu_cao));
    } else {
        printf("Chieu cao phai lon hon 0!\n");
    }
    return 0;
}