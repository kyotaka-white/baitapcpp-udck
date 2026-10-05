#include <stdio.h>

int main() {
    int N;
    printf("Nhap N: ");
    scanf("%d", &N);

    for (int so = 2; so <= N; so++) {
        int SNT = 1;
        for (int i = 2; i * i <= so; i++) {
            if (so % i == 0) { SNT = 0; break; }
        }
        if (SNT) printf("%d ", so);
    }
    return 0;
}