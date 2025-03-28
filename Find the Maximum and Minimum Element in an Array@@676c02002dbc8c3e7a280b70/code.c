#include <stdio.h>
#include <limits.h>

void findMinMax(int arr[], int n, int *min, int *max) {
    *min = INT_MAX;
    *max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min, max;
    findMinMax(arr, n, &min, &max);
    printf("%d %d", min, max);

    return 0;
}