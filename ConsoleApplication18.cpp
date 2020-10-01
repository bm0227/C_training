#include <stdio.h>

int power(int a, int b) {
    int num = 1;
    for (int i = 0; i < b; i++) {
        num = num * a;
    }
    return num;
}

int main()
{
    int first, second, number;
    printf("Enter base and power.\n");
    scanf("%d%d", &first, &second);
    number = power(first, second);
    printf("%d to the power of %d is %d", first, second, number);
    return 0;
}