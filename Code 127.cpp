#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *inFile, *outFile;
    int ch;

    inFile = fopen("input.txt", "r");
    if (!inFile) {
        printf("Unable to open input.txt\n");
        return 1;
    }

    outFile = fopen("output.txt", "w");
    if (!outFile) {
        printf("Unable to create output.txt\n");
        fclose(inFile);
        return 1;
    }

    while ((ch = fgetc(inFile)) != EOF) {
        fputc(toupper(ch), outFile);
    }

    fclose(inFile);
    fclose(outFile);

    printf("Conversion completed. Check output.txt\n");
    return 0;
}

