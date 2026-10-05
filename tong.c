#include <stdio.h>
int main()
{
    int n,s = 0,i;
    printf("Nhap n = ");scanf("%d",&n);
    for(i = 1;i <= n,;i++)
        s = s + i;
    printf("Tong S = %d",s);
}