#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student s1 = {"Bob", 22};
    struct Student *ptr = &s1;
    printf("%s %d", ptr->name, (*ptr).age);
    return 0;
}
