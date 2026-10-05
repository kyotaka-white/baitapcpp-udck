#include <stdio.h>
long ucln(int a ,int b)
{
    if (a == b) return a;
    if (a > b) return (a-b,b);
    if (a < b) return (a, b-a);
}
int main() {
    int a, b;
    printf("Nhập số nguyên a : ");
    scanf("%d", &a);
    printf("Nhập số nguyên b : ");
    scanf("%d", &b);
    printf("UCLN của %d và %d là: %d\n", a, b, ucln(a, b));
    return 0;
}