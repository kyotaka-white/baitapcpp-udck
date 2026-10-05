#include <stdio.h>
void RutGon(int *tu, int *mau) {
    int a = *tu, b = *mau;
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    int ucln = a;
    *tu /= ucln;  
    *mau /= ucln; 
}
void main() {
    int t, m;
    printf("Nhap tu so va mau so: ");
    scanf("%d %d", &t, &m);
    RutGon(&t, &m);
    printf("Phan so sau khi rut gon: %d/%d\n", t, m);
}