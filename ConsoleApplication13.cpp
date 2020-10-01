#include <stdio.h>

int main()
{
    double num = 1;
    double sum = 0;
    double i = 1;
    while (num > 0) {
        printf("Enter a natural number.\n");
        scanf("%lf", &num);
        if (num <= 0)
            break;
        sum = (num + sum) / i;
        printf("Current average is %.3lf.\n", sum);
        i++;
    }
    return 0;
}