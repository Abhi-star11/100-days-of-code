#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    fp = fopen("info.txt", "w");
    if (!fp) {
        printf("Unable to create file.\n");
        return 1;
    }

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %sAge: %d\n", name, age);
    fclose(fp);

    printf("Data saved successfully.\n");
    return 0;
}

