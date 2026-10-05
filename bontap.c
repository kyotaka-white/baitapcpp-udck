#include <stdio.h>
#include <string.h>

typedef struct {
    char MSV[50];
    char HoTen[50];
    float Diemtoan;
} Sinhvien;

void nhapds(Sinhvien ds[], int n) { 
    for(int i = 0; i < n; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i+1);
        printf("Nhap ma sinh vien: ");
        scanf("%s", ds[i].MSV);
        printf("Nhap ho ten: ");
        getchar(); // xoa bo nho dem enter
        fgets(ds[i].HoTen, sizeof(ds[i].HoTen), stdin); 
        ds[i].HoTen[strcspn(ds[i].HoTen, "\n")] = 0; // xoa ky tu xuong dong
        printf("Nhap diem toan: ");
        scanf("%f", &ds[i].Diemtoan);
    }
}

void xuatds(Sinhvien ds[], int n) {
    printf("%-20s%-20s%-10s\n", "MSV", "HoTen", "Diemtoan"); 
    for(int i = 0; i < n; i++) {
        printf("%-20s%-20s%-10.2f\n", ds[i].MSV, ds[i].HoTen, ds[i].Diemtoan);
    }
}

void TinhTong(Sinhvien ds[], int n) {
    float tong = 0; // Da them kieu du lieu float
    for(int i = 0; i < n; i++) {
        tong += ds[i].Diemtoan;
    }
    printf("Tong diem toan sinh vien: %.2f\n", tong);
}

void TimKiem(Sinhvien ds[], int n) { // Bo tham so char MSV[]
    char MSV[50]; // Khai bao cuc bo tai day
    printf("Nhap ma sinh vien can tim: ");
    scanf("%s", MSV);
    int found = 0;
    for(int i = 0; i < n; i++) {
        if(strcmp(ds[i].MSV, MSV) == 0) {
            printf("Thong tin sinh vien: \n");
            printf("%-20s%-20s%-10.2f\n", ds[i].MSV, ds[i].HoTen, ds[i].Diemtoan);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong tim thay sinh vien co ma: %s\n", MSV);
    }
}

void SapXep(Sinhvien ds[], int n) {
    Sinhvien temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) { // Da them j++
            if(ds[i].Diemtoan < ds[j].Diemtoan) { // Da them ngoac nhon
                temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    } // Da them ngoac dong ham
}

int main() {
    int n;
    Sinhvien ds[100];
    
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    
    nhapds(ds, n);
    
    printf("\n--- DANH SACH SINH VIEN VUA NHAP ---\n");
    xuatds(ds, n);
    
    TinhTong(ds, n);
    
    SapXep(ds, n);
    printf("\n--- DANH SACH SAU SAP XEP GIAM DAN ---\n");
    xuatds(ds, n);
    
    TimKiem(ds, n);
    
    return 0;
}