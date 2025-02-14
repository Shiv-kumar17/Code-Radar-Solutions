#include <stdio.h>

int main() {
    char input;
    scanf(" %c", &input); // Note the space before %c to consume any leftover newline

    switch (input) {
        case 'R':
            printf("Stop\n");
            break;
        case 'G':
            printf("Go\n");
            break;
        case 'Y':
            printf("Slow Down\n");
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}