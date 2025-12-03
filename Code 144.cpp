#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float height;
};

void printPerson(struct Person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Height: %.2f\n", p.height);
}

int main() {
    struct Person person1 = {"Alice", 25, 5.6};
    printPerson(person1);
    return 0;
}

