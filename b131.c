#include <stdio.h>
#include <string.h>
int main() {
    char str[100]; 
    printf("Nhập vào một xâu ký tự: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Xâu bạn vừa nhập là: %s\n", str);
    printf("Độ dài xâu: %lu\n", strlen(str));

    return 0;
}