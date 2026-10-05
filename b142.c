#include <stdio.h>

typedef struct {
    char ma[100];
    char ten[100];
    float gia;
    int soluong;
} SanPham;

int main() {
    int n, found = 0;
    float tong = 0;
    SanPham ds[100];
    printf("Nhap so luong san pham: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nNhap ma, ten, gia, so luong cho SP %d:\n", i + 1);
        scanf("%s", ds[i].ma);
        scanf(" %[^\n]", ds[i].ten);
        scanf("%f %d", &ds[i].gia, &ds[i].soluong);
        tong += ds[i].gia * ds[i].soluong; 
    }
    printf("\n--- DANH SACH SAN PHAM ---\n");
    printf("%-10s %-20s %10s %10s\n", "Ma", "Ten", "Gia", "SL");
    for (int i = 0; i < n; i++) {
        printf("%-10s %-20s %10.2f %10d\n", ds[i].ma, ds[i].ten, ds[i].gia, ds[i].soluong);
    }
    printf("\nTong gia tri kho: %.2f\n", tong);
    printf("\n--- SAN PHAM CO GIA > 100000 ---\n");
    for (int i = 0; i < n; i++) {
        if (ds[i].gia > 100000) {
            printf("%-10s %-20s %10.2f %10d\n", ds[i].ma, ds[i].ten, ds[i].gia, ds[i].soluong);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong co san pham nao\n");
    }
    return 0;
}