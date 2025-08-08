#include <stdio.h>

void bubbleSortAsc(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSortdse(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

char* twoArrays(int k, int A_count, int* A, int B_count, int* B) {
    bubbleSortAsc(A, A_count);
    bubbleSortdse(B, B_count);

    for(int i = 0; i < A_count; i++) {
        if ((A[i] + B[i]) < k) {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    int A[] = {2, 1, 3};
    int B[] = {7, 8, 9};
    int k = 10;
    printf("%s\n", twoArrays(k, 3, A, 3, B));
    return 0;
}
