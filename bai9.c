#include <stdio.h>

int main() {
    char Ten_SP[50];
    int So_Luong;
    float Gia, Tong;

    printf("Nhập tên sản phẩm : ");
    scanf("%s", Ten_SP);
    printf("Nhập số lượng : ");
    scanf("%d", &So_Luong);
    printf("Nhập giá : ");
    scanf("%f", &Gia);

    Tong = So_Luong * Gia;

    printf("Ten: %s | SL: %d | Gia: %.2f VND | Tong: %.2f VND\n", 
            Ten_SP, So_Luong, Gia, Tong);

    return 0;
}