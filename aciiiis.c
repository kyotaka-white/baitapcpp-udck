#include <stdio.h>

int main() {
    int i;
    printf("Bang ma ASCII co ban:\n");
    printf("STT\tKy tu\n");
    printf("------------------\n");
    for (i = 0; i <= 127; i++) {
        printf("%d\t%c\n", i, i);
    }
    return 0;
}