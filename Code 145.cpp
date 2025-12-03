#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

struct Student getTopStudent(struct Student students[], int n) {
    struct Student top = students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].marks > top.marks) {
            top = students[i];
        }
    }
    return top;
}

int main() {
    struct Student students[3] = {
        {"Alice", 101, 85.5},
        {"Bob", 102, 92.0},
        {"Charlie", 103, 88.0}
    };

    struct Student topStudent = getTopStudent(students, 3);
    printf("Top Student:\n");
    printf("Name: %s\n", topStudent.name);
    printf("Roll No: %d\n", topStudent.rollNo);
    printf("Marks: %.2f\n", topStudent.marks);

    return 0;
}

