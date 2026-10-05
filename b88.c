#include <stdio.h>

int daoNguoc(int n) {
    int soDao = 0;
    while (n > 0) {
        int chuSo = n % 10;        
        soDao = soDao * 10 + chuSo; 
        n = n / 10;                
    }
    return soDao;
}

int main() {
    int n;
    printf("Nhap vao so n: ");
    scanf("%d", &n);
    if (n == daoNguoc(n)) {
        printf("%d la so doi xung (Palindrome).\n", n);
    } else {
        printf("%d khong phai la so doi xung.\n", n);
    }

    return 0;
}