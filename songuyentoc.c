#include <stdio.h>

int main() {
	int n;
	int la_so_nguyen_to = 1;

	printf("Nhap vao mot so nguyen: ");
	scanf("%d", &n);
	if (n <= 1) {
		la_so_nguyen_to = 0;
	} else {
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				la_so_nguyen_to = 0;
				break;
			}
		}
	}
	if (la_so_nguyen_to == 1) {
		printf("%d la so nguyen to.\n", n);
	} else {
		printf("%d khong phai la so nguyen to.\n", n);
	}

	return 0;
}