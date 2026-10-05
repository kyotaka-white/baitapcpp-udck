#include <stdio.h>

int main() {
    float s, t, v_kmh, v_ms;

    printf("Nhập quãng đường và thời gian (giờ) : ");
    scanf("%f %f", &s, &t);

    v_kmh = s / t; 
    v_ms = v_kmh / 3.6; 

    printf("Vận tốc trung bình : %.2f km/h\n", v_kmh);
    printf("Vận tốc trung bình: %.2f m/s\n", v_ms);
    return 0;
}