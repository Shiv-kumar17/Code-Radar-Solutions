#include <stdio.h>

int main() {
    char ch;
    if (scanf(" %c", &ch) == 1){
    printf("ASCII Value: %d\n", ch);
    }
    else{
        printf("ASCII Value: 0\n");
    }
    return 0;
}