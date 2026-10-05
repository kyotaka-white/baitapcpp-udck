#include <stdio.h>
#include <string.h>

struct SanPham {
    char ma[10], ten[30];
    int sl;
};

int main() {
    int n, i, found = 0;
    char x[10];

    printf("Nhap so luong mat hang: "); 
    scanf("%d", &n);
    struct SanPham ds[n];

    for(i = 0; i < n; i++) {
        printf("Nhap Ma, Ten, So luong: ");
        scanf("%s %s %d", ds[i].ma, ds[i].ten, &ds[i].sl);
    }

    printf("\nNhap ma san pham can tim: "); 
    scanf("%s", x);

    for(i = 0; i < n; i++) {
        if(strcmp(ds[i].ma, x)) { 
            printf("=> Tim thay: %s | %s | Ton kho: %d\n", ds[i].ma, ds[i].ten, ds[i].sl);
            found = 1;
            break;
        }
    }

    if(!found) printf("=> Khong tim thay ma nay!\n");
    printf("\n--- CANH BAO HANG SAP HET (SL < 5) ---\n");
    for(i = 0; i < n; i++) {
        if(ds[i].sl < 5) {
            printf("Canh bao: %s (%s) chi con %d san pham\n", ds[i].ten, ds[i].ma, ds[i].sl);
        }
    }

    return 0;
}