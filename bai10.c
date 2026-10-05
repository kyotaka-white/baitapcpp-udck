#include <stdio.h>

int main() {
    char ch;
    printf("Nhập ký tự: ");
    scanf(" %c", &ch); 

    printf("Mã ASCII cuả '%c': %d\n", ch, ch);  
    printf("Kế tiếp : %c\n", ch + 1);
    printf("Trước đó : %c\n", ch - 1);
    return 0;
}