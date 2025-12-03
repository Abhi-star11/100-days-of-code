#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        getchar(); // clear leftover newline
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    printf("All Student Details:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: Name: %s, Roll Number: %d, Marks: %.2f\n",
               i + 1, students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}

