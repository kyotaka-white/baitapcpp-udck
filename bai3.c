#include <stdio.h>

int main() {
    int t;
    printf("Nhap so giay : ");
    scanf("%d", &t);
    int h, m, s;

    h = t / 3600;           
    m = (t % 3600) / 60;    
    s = t % 60;             

    printf("%d:%d:%d\n", h, m, s);
    printf("(%d gio %d phut %d giay)\n", h, m, s);

    return 0;
}