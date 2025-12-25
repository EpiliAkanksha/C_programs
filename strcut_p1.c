#include <stdio.h>
struct Point {
    int x;
    int y;
};
int main() {
    struct Point points[3] = {{1, 2}, {3, 4}, {5, 6}};
    printf("%d %d", points[1].x, points[2].y);
    return 0;
}
