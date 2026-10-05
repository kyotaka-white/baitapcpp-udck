#include <stdio.h>

int main() {
    float math, literature, english, avg;

    printf("Nhập điểm môn toán : ");
    scanf("%f", &math);

    printf("Nhập điểm môn văn : ");
    scanf("%f", &literature);

    printf("Nhập điểm môn anh : ");
    scanf("%f", &english);

    avg = (math * 2 + literature * 2 + english) / 5;
    printf("\nĐiểm trung bình: %.2f\n", avg);

    return 0;
}