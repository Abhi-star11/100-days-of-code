#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int lastIndex[256];
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int maxLen = 0, start = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (lastIndex[(unsigned char)s[i]] >= start) {
            start = lastIndex[(unsigned char)s[i]] + 1;
        }
        lastIndex[(unsigned char)s[i]] = i;

        int curLen = i - start + 1;
        if (curLen > maxLen)
            maxLen = curLen;
    }

    return maxLen;
}

int main() {
    char s[1000];
    scanf("%[^\n]s", s);
    int result = lengthOfLongestSubstring(s);
    printf("%d\n", result);
    return 0;
}

