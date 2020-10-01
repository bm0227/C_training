#include <stdio.h>

int square(int n) {
    int result;
    result = n * n;
    return result;
}

int main()
{
    int first, second, first_squ, second_squ, sum;
    printf("Enter a, b.\n");
    scanf_s("%d%d", &first, &second);
    first_squ = square(first);
    second_squ = square(second);
    sum = first_squ + second_squ;
    printf("%d * %d + %d * %d = %d\n", first, first, second, second, sum);
    return 0;
}