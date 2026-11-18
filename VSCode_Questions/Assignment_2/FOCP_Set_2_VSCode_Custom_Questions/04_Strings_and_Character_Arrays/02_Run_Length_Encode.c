#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1000
int main(void) {
    char input[MAX_LENGTH];
    int length, i = 0, count;
    if (scanf("%999s", input) != 1) return 1;
    length = (int)strlen(input);
    while (i < length) {
        count = 1;
        while (i + count < length && input[i] == input[i + count]) count++;
        printf("%c%d", input[i], count);
        i += count;
    }
    printf("\n");
    return 0;
}
