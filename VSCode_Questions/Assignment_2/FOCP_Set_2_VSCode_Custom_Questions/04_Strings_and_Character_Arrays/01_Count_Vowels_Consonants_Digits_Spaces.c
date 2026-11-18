#include <stdio.h>
#include <ctype.h>
#define MAX_LENGTH 1000
int main(void) {
    char line[MAX_LENGTH], ch, lowerCh;
    int i = 0, vowels = 0, consonants = 0, digits = 0, spaces = 0;
    if (fgets(line, sizeof(line), stdin) == NULL) return 1;
    while (line[i] != '\0') {
        ch = line[i];
        lowerCh = (char)tolower((unsigned char)ch);
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' ||
            lowerCh == 'o' || lowerCh == 'u') vowels++;
        else if (lowerCh >= 'a' && lowerCh <= 'z') consonants++;
        else if (isdigit((unsigned char)ch)) digits++;
        else if (ch == ' ') spaces++;
        i++;
    }
    printf("%d %d %d %d\n", vowels, consonants, digits, spaces);
    return 0;
}
