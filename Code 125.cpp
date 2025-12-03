#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[200];

    printf("Enter filename: ");
    scanf("%s", filename);
    getchar();  // consume leftover newline

    fp = fopen(filename, "a");
    if (!fp) {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);
    fclose(fp);

    printf("Text appended successfully.\n");
    return 0;
}

