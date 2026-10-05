#include <stdio.h>
int main() {
    int x = 10;          
    int *p = &x;         
    printf("Gia tri ban dau cua x: %d\n", x);
    printf("Dia chi cua x: %p\n", (void*)&x);
    printf("Gia tri cua con tro p (cung la dia chi cua x): %p\n", (void*)p);
    *p = 100;            
    printf("Gia tri cua x sau khi thay doi qua p: %d\n", x);
    return 0;
}