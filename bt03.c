#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[200];
    int na = 0, pa = 0, cs = 0, kt = 0;

    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    for (int i = 0; i < strlen(s); i++) {
        char c = tolower(s[i]);
        if (isdigit(c)) cs++;
        else if (isspace(c)) kt++;
        else if (isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') na++;
            else pa++;
        }
    }
    printf("Nguyen am: %d, Phu am: %d, Chu so: %d, Khoang trang: %d\n", na, pa, cs, kt);

    printf("Chuoi chu hoa: ");
    for (int i = 0; i < strlen(s); i++) printf("%c", toupper(s[i]));
    
    printf("\nChuoi dao nguoc: ");
    for (int i = strlen(s) - 1; i >= 0; i--) printf("%c", s[i]);

    char t[200];
    int k = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (!isspace(s[i])) t[k++] = tolower(s[i]);
    }
    t[k] = '\0';

    int pal = 1;
    for (int i = 0; i < k / 2; i++) {
        if (t[i] != t[k - 1 - i]) {
            pal = 0;
            break;
        }
    }
    
    if (pal) printf("\nChuoi la Palindrome.\n");
    else printf("\nChuoi khong phai Palindrome.\n");

    return 0;
}