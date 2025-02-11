#include <stdio.h>

int count_leading_zeros(unsigned int num) {
    if (num == 0) {
        return 32;
    }

    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) { 
            break;
        }
        count++;
    }

    return count;
}

int main() {
    unsigned int num = 16;  
    int leading_zeros = count_leading_zeros(num);
    printf("%d\n", num, leading_zeros);

    num = 0;  
    leading_zeros = count_leading_zeros(num);
    printf("%d\n", num, leading_zeros); 

    return 0;
}