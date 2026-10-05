#include <stdio.h>

int main() {
    int n;
    int so_dao_nguoc = 0;
    
    printf("Nhap n: ");
    scanf("%d", &n);
    
    while (n != 0) {
        so_dao_nguoc = so_dao_nguoc * 10 + (n % 10);
        n /= 10;
    }
    
    printf("So dao nguoc la: %d\n", so_dao_nguoc);
    return 0;
}