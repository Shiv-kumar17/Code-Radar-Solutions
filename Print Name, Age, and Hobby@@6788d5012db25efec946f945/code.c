#include <stdio.h>

int main() {
    char name, hobby;
    int age;
    scanf("%c %d\n", &name, &age);
    scanf("%c", &hobby);
    printf("Name: \nAge: \n Hobby: ", name, age, hobby);
    return 0;
}