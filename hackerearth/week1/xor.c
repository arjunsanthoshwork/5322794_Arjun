#include <stdio.h>
#include <string.h>

int main() {
    char n1[10001], n2[10001];

    scanf("%10000s", n1);
    scanf("%10000s", n2);

    int len = strlen(n1);
    for (int i = 0; i < len; i++) {
        putchar(n1[i] == n2[i] ? '0' : '1');
    }

    return 0;
}
