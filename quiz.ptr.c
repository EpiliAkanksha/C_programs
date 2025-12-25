#include <stdio.h>

struct p {
    int x;
    char y;
};

int main() {
    struct p p1 = {19, 'A'};
    struct p *ptr1 = &p1;
    int x = sizeof(p1) / sizeof(ptr1);
    if (x == 1)
        printf("%d", ptr1->x);
    else
        printf("false");
    return 0;
}
