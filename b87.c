#include <stdio.h>

float tinhTienDien(int cu, int moi) {
    int tieuThu = moi - cu;
    float tongTien = 0;

    if (tieuThu <= 50) {
        tongTien = tieuThu * 1.678;
    } 
    else if (tieuThu <= 100) {
        tongTien = (50 * 1.678) + (tieuThu - 50) * 1.734;
    } 
    else {
        tongTien = (50 * 1.678) + (50 * 1.734) + (tieuThu - 100) * 2.014;
    }
    return tongTien * 1.1;
}

int main() {
    int chiSoCu, chiSoMoi;

    printf("Nhap chi so cu: ");
    scanf("%d", &chiSoCu);
    printf("Nhap chi so moi: ");
    scanf("%d", &chiSoMoi);

    if (chiSoMoi < chiSoCu) {
        printf("Loi: Chi so moi phai lon hon chi so cu!\n");
    } else {
        float ketQua = tinhTienDien(chiSoCu, chiSoMoi);
        printf("Tong tien dien (da co 10%% VAT): %.2f dong\n", ketQua);
    }

    return 0;
}