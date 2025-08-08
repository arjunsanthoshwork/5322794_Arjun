#include <stdio.h>
#include <stdlib.h>

int* countingSort(int arr_count, int* arr, int* result_count) {
    int *freq = (int*)calloc(100, sizeof(int));
    for(int i = 0; i < arr_count; i++) {
        int val = arr[i];
        if (val >= 0 && val < 100) {
            freq[val]++;
        }
    }
    *result_count = 100;
    return freq;
}

int main() {
    int arr[] = {1, 1, 3, 2, 1};
    int arr_count = sizeof(arr) / sizeof(arr[0]);
    int result_count;
    int* result = countingSort(arr_count, arr, &result_count);

    for (int i = 0; i < result_count; i++) {
        printf("%d ", result[i]);
    }
    free(result);
    return 0;
}
