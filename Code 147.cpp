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
    struct Employee emp1 = {"Alice", 1001, 50000.0, {10, 5, 2018}};
    struct Employee emp2 = {"Bob", 1002, 60000.0, {15, 7, 2019}};

    FILE *fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fwrite(&emp1, sizeof(struct Employee), 1, fp);
    fwrite(&emp2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    struct Employee readEmp;

    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Employee Details from File:\n");
    while (fread(&readEmp, sizeof(struct Employee), 1, fp) == 1) {
        printf("Name: %s\n", readEmp.name);
        printf("ID: %d\n", readEmp.id);
        printf("Salary: %.2f\n", readEmp.salary);
        printf("Joining Date: %02d-%02d-%04d\n", readEmp.joiningDate.day, readEmp.joiningDate.month, readEmp.joiningDate.year);
        printf("\n");
    }

    fclose(fp);
    return 0;
}

