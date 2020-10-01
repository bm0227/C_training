#include <stdio.h>

int main()
{
    double f; int i;
    printf("Enter a real number.\n");
    scanf_s("%lf", &f);
    i = (int)f;
    printf("%d\n", i);
    return 0;
}