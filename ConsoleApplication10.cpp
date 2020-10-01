#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1, x2, y2, distance;
    printf("Enter the coordinates of point p.\n");
    scanf_s("%lf%lf", &x1, &y1);
    printf("Enter the coordinates of point q.\n");
    scanf_s("%lf%lf", &x2, &y2);
    distance = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    distance = sqrt(distance);
    printf("Distance between the point is %lf.\n", distance);
    return 0;
}
