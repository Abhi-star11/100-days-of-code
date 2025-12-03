#include <stdio.h>
#include <stdlib.h>

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
    struct Employee *emp = (struct Employee *)malloc(sizeof(struct Employee));
    if (emp == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter employee name: ");
    scanf("%s", emp->name);
    printf("Enter employee ID: ");
    scanf("%d", &emp->id);
    printf("Enter employee salary: ");
    scanf("%f", &emp->salary);
    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &emp->joiningDate.day, &emp->joiningDate.month, &emp->joiningDate.year);

    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp->name);
    printf("ID: %d\n", emp->id);
    printf("Salary: %.2f\n", emp->salary);
    printf("Joining Date: %02d-%02d-%04d\n", emp->joiningDate.day, emp->joiningDate.month, emp->joiningDate.year);

    free(emp);
    return 0;
}

