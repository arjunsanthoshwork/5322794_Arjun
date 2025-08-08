#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long flippingBits(long n) {
    return (unsigned int)(~n) & 0xFFFFFFFF;
}

int main() {
    long n;
    scanf("%ld", &n);
    printf("%lu\n", flippingBits(n));
    return 0;
}
