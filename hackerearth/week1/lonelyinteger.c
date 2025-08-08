#include <stdio.h>

int lonelyinteger(int a_count, int* a) {
    int result = 0;
    for(int i = 0; i < a_count; i++) {
        int count = 0;
        for(int j = 0; j < a_count; j++) {
            if(a[i] == a[j]) {
                count = count + 1;
            }
        }
        if(count == 1) {
            result = a[i];
            break;
        }
    }
    return result;
}

int main() {
    int arr[] = {1, 1, 2};
    int result = lonelyinteger(3, arr);
    printf("%d\n", result);
    return 0;
}
