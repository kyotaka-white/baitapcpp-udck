#include <stdio.h>

int SNT(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) 
        if (n % i == 0) return 0;
    return 1;
}
int main() {
    int Input;

    printf("Nhap vao mot n: ");
    if (scanf("%d", &Input) == 1) {
        printf("%d %s la n nguyen to.\n", 
               Input, 
               SNT(Input) ? "" : "khong phai");
    }
    return 0;
}