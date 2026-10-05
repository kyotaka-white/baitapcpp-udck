#include <stdio.h>
#include <string.h>

typedef struct {
    char maSach[20];
    char tenSach[50];
    char tacGia[50];
    float giaTien;
    int soLuong;
} Sach;

void nhapSach(Sach *s) {
    printf("Nhap ma sach: ");
    scanf(" %[^\n]", s->maSach); 
    printf("Nhap ten sach: ");
    scanf(" %[^\n]", s->tenSach);
    printf("Nhap tac gia: ");
    scanf(" %[^\n]", s->tacGia);
    printf("Nhap gia tien: ");
    scanf("%f", &s->giaTien);
    printf("Nhap so luong: ");
    scanf("%d", &s->soLuong);
}

void xuatSach(Sach s) {
    printf("Ma: %s | Ten: %s | Tac gia: %s | Gia: %.2f | SL: %d\n", 
           s.maSach, s.tenSach, s.tacGia, s.giaTien, s.soLuong);
}

void kiemTraGiaTri(Sach s) {
    float tongTien = s.giaTien * s.soLuong;
    printf("Tong tien = %.2f -> ", tongTien);
    
    if (tongTien >= 1000000) {
        printf("Sach co gia tri cao\n");
    } else {
        printf("Sach co gia tri thap\n");
    }
}

void sapXepSach(Sach ds[], int n) {
    Sach temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(ds[i].tenSach, ds[j].tenSach) > 0) {
                temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    Sach ds[100]; 

    printf("Nhap so luong sach can quan ly: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\n--- Nhap thong tin cuon sach thu %d ---\n", i + 1);
        nhapSach(&ds[i]);
    }

    printf("\n--- THONG TIN VA GIA TRI KHO ---\n");
    for (int i = 0; i < n; i++) {
        xuatSach(ds[i]);
        kiemTraGiaTri(ds[i]);
    }

    sapXepSach(ds, n);
    
    printf("\n--- DANH SACH SAU KHI SAP XEP THEO TEN ---\n");
    for (int i = 0; i < n; i++) {
        xuatSach(ds[i]);
    }

    return 0;
}