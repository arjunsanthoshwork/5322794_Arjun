#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* matchingStrings(int strings_count, char** strings, int queries_count, char** queries, int* result_count) {
    int* res = (int*)malloc(sizeof(int) * queries_count);

    for (int i = 0; i < queries_count; i++) {
        int count = 0;
        for (int j = 0; j < strings_count; j++) {
            if (strcmp(queries[i], strings[j]) == 0) {
                count++;
            }
        }
        res[i] = count;
    }

    *result_count = queries_count;
    return res;
}

int main() {
    char* strings[] = {"aba", "baba", "aba", "xzxb"};
    char* queries[] = {"aba", "xzxb", "ab"};
    int result_count;
    int* result = matchingStrings(4, strings, 3, queries, &result_count);

    for (int i = 0; i < result_count; i++) {
        printf("%d\n", result[i]);
    }
    free(result);
    return 0;
}
