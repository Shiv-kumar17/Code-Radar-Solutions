#include <stdio.h>

int main() {
    char name[50], hobby[50];
    int age;
    scanf("%c %d\n", &name, &age);
    scanf("%c", &hobby);
    printf("Name: %c \nAge: %d \nHobby: %c ", name, age, hobby);
    return 0;
}