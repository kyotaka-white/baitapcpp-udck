#include <stdio.h>

#define MAX 100

void insert(float arr[], int *n, float value) {
    if (*n < MAX) {
        arr[*n] = value;
        (*n)++;
        printf("Da them diem: %.2f\n", value);
    } else {
        printf("Danh sach day!\n");
    }
}

void remove_at(float arr[], int *n, int index) {
    if (index < 0 || index >= *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = index; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
    printf("Da xoa phan tu tai vi tri %d\n", index);
}

void update(float arr[], int n, int index, float new_value) {
    if (index < 0 || index >= n) {
        printf("Vi tri khong hop le!\n");
    } else {
        arr[index] = new_value;
        printf("Da cap nhat vi tri %d thanh %.2f\n", index, new_value);
    }
}

void display(float arr[], int n) {
    printf("Danh sach diem: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f  ", arr[i]);
    }
    printf("\n");
}

int main() {
    float diem[MAX];
    int n = 0; 
    insert(diem, &n, 8.5);
    insert(diem, &n, 7.0);
    insert(diem, &n, 9.0);
    display(diem, n);

    update(diem, n, 1, 9.5); 
    display(diem, n);

    remove_at(diem, &n, 0); 
    display(diem, n);

    return 0;
}