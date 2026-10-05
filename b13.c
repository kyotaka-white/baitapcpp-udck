#include <stdio.h>

void tronDanhSach(int a[], int n1, int b[], int n2, int c[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (a[i] > b[j]) { 
            c[k++] = a[i++]; 
        } else {
            c[k++] = b[j++];
        }
    }

    while (i < n1) c[k++] = a[i++];

    while (j < n2) c[k++] = b[j++]
}

int main() {
    int a[] = {101, 105, 110};
    int b[] = {102, 108, 115, 120};
    int n1 = 3, n2 = 4;
    int c[7];

    tronDanhSach(a, n1, b, n2, c);

    printf("Danh sach sau khi tron: ");
    for (int i = 0; i <= 7; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}