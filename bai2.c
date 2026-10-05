#include <stdio.h>

int main() {
    int input = 3750;
    int h, m, s;

    h = input / 3600;           
    m = (input % 3600) / 60;    
    s = input % 60;             

    printf("%d:%d:%d\n", h, m, s);
    printf("(%d gio %d phut %d giay)\n", h, m, s);

    return 0;
}