#include <stdio.h>
int ucln(int a, int b) {
    if (b == 0)
        return a;
    return ucln(b, a % b);
}
int main() {
    int n1, n2;
    printf("Nhập hai số nguyên dương: ");
    scanf("%d %d", &n1, &n2);
    if (n1 < 0) n1 = -n1;
    if (n2 < 0) n2 = -n2;
    printf("UCLN của %d và %d là: %d\n", n1, n2, ucln(n1, n2));
    return 0;
}