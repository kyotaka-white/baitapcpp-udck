#include <stdio.h>
void nhapMang(int a[], int *n) {
    do {
        printf("Nhap so luong phan tu n (0 < n <= 100): ");
        scanf("%d", n);
    } while (*n <= 0 || *n > 100);

    for (int i = 0; i < *n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void xuatMang(int a[], int n) {
    printf("\nMang vua nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int timmax(int a[], int n) {
    int Max = 0; 
    for (int i = 1; i < n; i++) {
        if (a[i] > a[Max]) {
            Max = i; 
        }
    }
    return Max;
}
int timmin(int a[], int n) {
    int Min = 0; 
    for (int i = 1; i < n; i++) {
        if (a[i] < a[Min]) {
            Min = i; 
        }
    }
    return Min;
}
int main() {
    int n, a[100];
    nhapMang(a, &n);
    xuatMang(a, n);
    int Max = timmax(a, n);
    int Min = timmin(a, n);
    printf("\nGia tri MAX: %d (xuat hien dau tien tai chi so: %d)", a[Max], Max);
    printf("\nGia tri MIN: %d (xuat hien dau tien tai chi so: %d)\n", a[Min], Min);
    return 0;
}