#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    scanf("%d", &num);
    bool result = !(num > 0);

    if (result){
        printf("True\n");
    }
    else{
        printf("False\n");
    }   
    return 0;
}