#include <stdio.h>

int main() {
    float Day = 0.1;
    int Lan_Gap = 0;
    while (Day < 1000) {
        Day *= 2;
        Lan_Gap++;
    }
    printf("Phai gap %d lan de day %.1f mm (~%.1f m)\n", Lan_Gap, Day, Day/1000);
    return 0;
}