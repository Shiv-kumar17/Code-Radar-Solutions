#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i; i<n+1; i++){
        for(int j; j<=i+1; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}