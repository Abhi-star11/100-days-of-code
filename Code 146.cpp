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

void printEmployee(struct Employee e) {
    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Salary: %.2f\n", e.salary);
    printf("Joining Date: %02d-%02d-%04d\n", e.joiningDate.day, e.joiningDate.month, e.joiningDate.year);
}

int main() {
    struct Employee emp = {"John Doe", 1001, 55000.0, {15, 7, 2020}};
    printEmployee(emp);
    return 0;
}

