#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int i, topIndex = 0;

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

    // Find the student with highest marks
    for (i = 1; i < 5; i++) {
        if (students[i].marks > students[topIndex].marks) {
            topIndex = i;
        }
    }

    printf("Student with Highest Marks:\n");
    printf("Name: %s\n", students[topIndex].name);
    printf("Roll Number: %d\n", students[topIndex].roll_no);
    printf("Marks: %.2f\n", students[topIndex].marks);

    return 0;
}

