#include <stdio.h>

int main() {
    int a, b;
    char phep_tinh;

    printf("Nhap hai so: ");
    scanf("%d %d", &a, &b);
    while (getchar() != '\n'); 

    printf("Nhap phep tinh: ");
    phep_tinh = getchar();

    switch (phep_tinh) {
        case '+': printf("Ket qua: %d", a + b); break;
        case '-': printf("Ket qua: %d", a - b); break;
        case '*': printf("Ket qua: %d", a * b); break;
        case '/': 
            if (b != 0) printf("Ket qua: %.2f", (float)a / b);
            else printf("Loi chia cho 0");
            break;
        default: printf("Phep tinh khong hop le");
    }
    return 0;
}