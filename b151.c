#include <stdio.h>
#include <string.h>

typedef struct {
    char maSV[20];
    char hoTen[50];
    int tuoi;
    float dtb;
} SinhVien ;

void nhap(SinhVien *sv) {

    getchar(); 

    printf("Ma SV: ");
    fgets(sv->maSV, sizeof(sv->maSV), stdin); 
    sv->maSV[strcspn(sv->maSV, "\n")] = 0;

    printf("Ho ten: ");
    fgets(sv->hoTen, sizeof(sv->hoTen), stdin); 
    sv->hoTen[strcspn(sv->hoTen, "\n")] = 0;

    printf("Tuoi: ");
    scanf("%d", &sv->tuoi); 

    printf("Diem TB: ");
    scanf("%f", &sv->dtb); 
}

void xuat(SinhVien sv) {
    printf("Ma SV: %s \n Ho ten: %s \n Tuoi: %d \n Diem: %.2f -> ", sv.maSV, sv.hoTen, sv.tuoi, sv.dtb);
    if (sv.dtb >= 5.0) printf("Dat\n");
    else printf("Khong dat\n");
}
int main() {
    int n;
    SinhVien ds[100]; 

    printf("Nhap so luong sinh vien: "); 
    scanf("%d", &n);


    for (int i = 0; i < n; i++) {
        printf("\n--- Nhap sinh vien thu %d ---\n", i + 1);
        nhap(&ds[i]);
        
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].dtb < ds[j].dtb) {
                SinhVien temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }

    printf("\n=== DANH SACH SINH VIEN SAU KHI SAP XEP (GIAM DAN) ===\n");
    for (int i = 0; i < n; i++) {
        xuat(ds[i]);
    }

    return 0;
}