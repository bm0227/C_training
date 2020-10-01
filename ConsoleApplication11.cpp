#include <stdio.h>
#include <math.h>

double round_up(double n) {
    double result;
    result = int(result + 0.5);
    return result;
}

int main()
{
    double first;
    printf("Enter a positive real number.\n");
    scanf_s("%lf", &first);
    first = round_up(first);
    printf("The round up value is %d\n", first);
}