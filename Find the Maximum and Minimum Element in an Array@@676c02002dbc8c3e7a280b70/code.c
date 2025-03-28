#include <stdio.h>

void findMaxMin(int arr[], int n, int *max, int *min) {
    *max = *min = arr[0];  // Initialize max and min with the first element

    for (int i = 1; i < n; i++) {
        if (arr[i] > *max)
            *max = arr[i];
        else if (arr[i] < *min)
            *min = arr[i];
    }
}

int main() {
    int arr[];
    int n;
    scanf("%d", &n);
    for(int i=0, i<n; i++){
        scanf("%d", arr[i]);
    }
    int max, min;

    findMaxMin(arr, n, &max, &min);

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
