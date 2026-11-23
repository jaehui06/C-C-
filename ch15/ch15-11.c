#include <stdio.h>

typedef struct {
    double x;
    double y;
} Point;

int main(void) {
    Point p1, p2;

    if (scanf("%lf %lf", &p1.x, &p1.y) != 2) {
        return 1;
    }
    if (scanf("%lf %lf", &p2.x, &p2.y) != 2) {
        return 1;
    }

    double cx = (p1.x + p2.x) / 2.0;
    double cy = (p1.y + p2.y) / 2.0;

    printf("Center point = (%.1f, %.1f)\n", cx, cy);
    return 0;
}