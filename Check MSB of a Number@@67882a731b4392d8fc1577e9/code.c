#include <stdio.h>
int main(){
    unsigned int a;
    scanf("%u",&a);
    if(a>=2147483648){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}