#include <stdio.h>
#include <stdlib.h>

char* timeConversion(char* s) {
    char* result = (char*)malloc(9);
    int hour = (s[0] - '0') * 10 + (s[1] - '0');
    char p1 = s[8];
    char p2 = s[9];

    if (p1 == 'A' && p2 == 'M') {
        if (hour == 12) hour = 0;
    } else if (p1 == 'P' && p2 == 'M') {
        if (hour != 12) hour += 12;
    }

    sprintf(result, "%02d:%c%c:%c%c", hour, s[3], s[4], s[6], s[7]);
    return result;
}

int main() {
    char time[] = "07:05:45PM";
    char* result = timeConversion(time);
    printf("%s\n", result);
    free(result);
    return 0;
}
