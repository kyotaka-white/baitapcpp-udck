#include <stdio.h>

int main() {
    int n;
    float diem[100][3], tong[100];

    printf("Nhap so thi sinh (N <= 100): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Thi sinh %d:\n", i + 1);
        tong[i] = 0;
        for (int j = 0; j < 3; j++) {
            printf("  Diem mon %d: ", j + 1);
            scanf("%f", &diem[i][j]);
            tong[i] += diem[i][j];
        }
    }

    printf("\nThi sinh dat (Tong >= 15 & khong mon < 3):\n");
    for (int i = 0; i < n; i++) {
        int liet = 0;
        for (int j = 0; j < 3; j++) {
            if (diem[i][j] < 3) liet = 1;
        }
        if (tong[i] >= 15 && !liet) {
            printf("Thi sinh %d - Tong: %.2f\n", i + 1, tong[i]);
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (tong[i] < tong[j]) {
                float temp = tong[i];
                tong[i] = tong[j];
                tong[j] = temp;
            }
        }
    }

    printf("\nTong diem sau khi sap xep giam dan: ");
    for (int i = 0; i < n; i++) printf("%.2f  ", tong[i]);

    return 0;
}