#include <stdio.h>

int main()
{
    int num, max, sum = 0;
    printf("Enter a maximum number.\n");
    scanf("%d", &max);
    for (num = 1; num <= max; num++) {
        if (num % 5 == 0)
            continue;
        sum += num;
    }
    printf("The sum is %d.\n", sum);
    return 0;
}