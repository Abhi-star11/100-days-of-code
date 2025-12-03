#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int roll;
    float marks;
} Student;

int main() {
    FILE *file;
    Student s;
    int n, i;

    printf("How many students? ");
    scanf("%d", &n);
    getchar(); // clear newline

    file = fopen("students.txt", "w");
    if (!file) {
        printf("Cannot create file.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Student %d Name: ", i + 1);
        fgets(s.name, sizeof(s.name), stdin);
        s.name[strcspn(s.name, "\n")] = 0;

        printf("Roll Number: ");
        scanf("%d", &s.roll);

        printf("Marks: ");
        scanf("%f", &s.marks);
        getchar(); // clear newline

        fprintf(file, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(file);

    file = fopen("students.txt", "r");
    if (!file) {
        printf("Cannot open file.\n");
        return 1;
    }

    printf("\nStored Student Records:\n");
    while (fscanf(file, "%s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(file);
    return 0;
}

