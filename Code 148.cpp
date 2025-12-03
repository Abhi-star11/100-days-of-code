#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int areIdentical(struct Student s1, struct Student s2) {
    if (s1.rollNo == s2.rollNo && s1.marks == s2.marks && strcmp(s1.name, s2.name) == 0) {
        return 1;
    }
    return 0;
}

int main() {
    struct Student s1, s2;

    printf("Enter details of first student (name rollNo marks):\n");
    scanf("%s %d %f", s1.name, &s1.rollNo, &s1.marks);

    printf("Enter details of second student (name rollNo marks):\n");
    scanf("%s %d %f", s2.name, &s2.rollNo, &s2.marks);

    if (areIdentical(s1, s2)) {
        printf("The two students are identical.\n");
    } else {
        printf("The two students are not identical.\n");
    }

    return 0;
}

