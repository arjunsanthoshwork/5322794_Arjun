#include <stdio.h>


void sort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void miniMaxSum(int arr[], int size) {
    long long min = 0, max = 0;

    sort(arr, size);

    for (int i = 0; i < size - 1; i++) {
        min += arr[i];
    }

    for (int i = 1; i < size; i++) {
        max += arr[i];
    }

    printf("%lld %lld\n", min, max);
}

int main() {
    int arr[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    miniMaxSum(arr, 5);
    return 0;
}
