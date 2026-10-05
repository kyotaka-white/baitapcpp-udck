#include <stdio.h>
void sapXep(int a[], int n, int tang) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++)
            if ((tang && a[i] > a[j]) || (!tang && a[i] < a[j])) 
                int temp = a[i]; a[i] = a[j]; a[j] = temp; }
            
}
void inMang(int a[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", a[i]); {
    printf("\n"); }
}
int main() {
    int n;
    printf("Nhap n (0 < n < 100): ");
    scanf("%d", &n);
    int a[n];
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    sapXep(a, n, 1); 
    printf("Mang tang dan: "); inMang(a, n);
    sapXep(a, n, 0); 
    printf("Mang giam dan: "); inMang(a, n);
    return 0;
}