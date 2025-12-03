#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joiningDate;
};

int main() {
    struct Employee emp = {"Alice", 1001, 50000.0, {10, 5, 2020}};
    struct Employee *ptr = &emp;

    printf("Original Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("ID: %d\n", ptr->id);
    printf("Salary: %.2f\n", ptr->salary);
    printf("Joining Date: %02d-%02d-%04d\n", ptr->joiningDate.day, ptr->joiningDate.month, ptr->joiningDate.year);

    ptr->salary = 55000.0;
    ptr->joiningDate.day = 15;
    ptr->joiningDate.month = 6;
    ptr->joiningDate.year = 2021;

    printf("\nModified Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("ID: %d\n", ptr->id);
    printf("Salary: %.2f\n", ptr->salary);
    printf("Joining Date: %02d-%02d-%04d\n", ptr->joiningDate.day, ptr->joiningDate.month, ptr->joiningDate.year);

    return 0;
}

