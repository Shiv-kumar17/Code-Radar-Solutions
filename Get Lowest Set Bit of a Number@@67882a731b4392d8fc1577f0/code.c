#include <stdio.h>

int findLowestSetBitPosition(int n) {
    if (n == 0) {
        return -1; // No set bits in 0
    }

    int position = 0;
    while ((n & 1) == 0) {
        n >>= 1; // Right shift (divide by 2)
        position++;
    }
    return position;
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }


    int position = findLowestSetBitPosition(num);

    if (position == -1) {
        printf("No set bits found.\n");
    } else {
        printf("Position of lowest set bit: %d\n", position);
    }

    return 0;
}
