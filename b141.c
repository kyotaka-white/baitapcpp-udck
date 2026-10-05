#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int tu;
    int mau;
} PhanSo;

int ucln(int a, int b) {
    a = abs(a); b = abs(b);
    while (b != 0) {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a == 0 ? 1 : a;
}

void rutgonPSo(PhanSo p) {
    int u = ucln(p.tu, p.mau);
    p.tu /= u; 
    p.mau /= u;
    
    if (p.mau < 0) { 
        p.tu = -p.tu; 
        p.mau = -p.mau; 
    }
    printf("%d/%d\n", p.tu, p.mau);
}

void inPhanSo(PhanSo p) {
    int u = ucln(p.tu, p.mau);
    p.tu /= u; 
    p.mau /= u;
    
    if (p.mau < 0) { 
        p.tu = -p.tu; 
        p.mau = -p.mau; 
    }
    printf("%d/%d\n", p.tu, p.mau);
}

PhanSo tong(PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu = a.tu * b.mau + b.tu * a.mau;
    kq.mau = a.mau * b.mau;
    return kq;
}

PhanSo hieu(PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu = a.tu * b.mau - b.tu * a.mau;
    kq.mau = a.mau * b.mau;
    return kq;
}

void xuLyPhanSo() {
    PhanSo p1, p2;
    
    printf("Nhap ps 1 (tu mau): "); 
    scanf("%d %d", &p1.tu, &p1.mau);
    
    printf("Nhap ps 2 (tu mau): "); 
    scanf("%d %d", &p2.tu, &p2.mau);

    if (p1.mau == 0 || p2.mau == 0) {
        printf("Loi: Mau so phai khac 0!\n");
        return;
    }

    printf("Hai phan so vua nhap: %d/%d va %d/%d\n", p1.tu, p1.mau, p2.tu, p2.mau);
    
    printf("Tong (da rut gon): "); 
    inPhanSo(tong(p1, p2)); 
    
    printf("Hieu (da rut gon): "); 
    inPhanSo(hieu(p1, p2));
}
int main() {
    xuLyPhanSo(); 
    return 0;
}