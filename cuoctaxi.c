#include <stdio.h>
int main() {
    int khoangcach, tien;
// Nhap du lieu
    printf("Nhap vao so km: "); 
    scanf("%f", &khoangcach);
// Dieu kien tinh toan
    if (khoangcach <= 1) {
     tien = khoangcach * 15000;
    } else if (khoangcach <= 5) {
     tien = 1 * 15000 + (khoangcach - 1) * 13500;
    } else {
     tien = 1 * 15000 + 4 * 13500 + (khoangcach - 5) * 11000;
    }
    if (khoangcach > 120) {
     tien = tien * 0.9;
    }
    printf("Tong cuoc taxi: %.0f dong\n", tien);
    return 0;
}