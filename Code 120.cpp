#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    scanf("%[^\n]", s);

    int i = 0;
    while (s[i] == ' ') i++;

    if (s[i] != '\0') s[i] = toupper(s[i]);

    for (i = i + 1; s[i] != '\0'; i++)
        s[i] = tolower(s[i]);

    printf("%s", s);
    return 0;
}

