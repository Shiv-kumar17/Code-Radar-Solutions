#include <stdio.h>

int main() {
    int num;
    scanf("%sd", &num);
    printf("Hexadecimal: %X\n", num);
    printf("Octal: %o\n", num);
    return 0;
}