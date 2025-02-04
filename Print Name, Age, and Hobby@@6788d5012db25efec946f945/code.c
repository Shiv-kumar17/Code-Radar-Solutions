#include <stdio.h>

int main() {
    char name, hobby;
    int age;
    scanf("%c %d\n", &name, &age);
    scanf("%c", &hobby);
    printf("Name: \nAge: \nHobby: ", name, age, hobby);
    return 0;
}