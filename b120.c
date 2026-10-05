#include <stdio.h>
void nhap(int a[100][100], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
}
void xuat(int a[100][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}
void Lietke(int a[100][100], int n) {
    for (int i = 0; i < n; i++) printf("%d ", a[i][i]);
    printf("\n");
}
int tongphu(int a[100][100], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) s += a[i][n - 1 - i];
    return s;
}
long long tichTrenChinh(int a[100][100], int n) {
    long long t = 1;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++) t *= a[i][j];
    return t;
}
float tbcDuoiPhu(int a[100][100], int n) {
    int s = 0, c = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i + j > n - 1) {
                s += a[i][j];
                c++;
            }
    return (c > 0) ? (float)s / c : 0;
}
int main() {
    int n, a[100][100];
    scanf("%d", &n);
    nhap(a, n);
    xuat(a, n);
    Lietke(a, n);
    printf("%d\n", tongphu(a, n));
    printf("%lld\n", tichTrenChinh(a, n));
    printf("%.2f\n", tbcDuoiPhu(a, n));
    return 0;
}