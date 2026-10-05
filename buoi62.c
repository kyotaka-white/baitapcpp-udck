#include <stdio.h>

int main() {
    int m, n;
    
    printf("Nhap m (hang) va n (cot): ");
    scanf("%d %d", &m, &n);
    
    for (int hang = 1; hang <= m; hang++) {
        for (int cot = 1; cot <= n; cot++) {
            printf("%c", (hang == 1 || hang == m || cot == 1 || cot == n) ? '*' : ' ');
        }
        printf("\n");
    }
    return 0;
}