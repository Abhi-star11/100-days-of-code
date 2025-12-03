#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("info.txt", "r");
    if (!fp) {
        printf("Unable to open file.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}

