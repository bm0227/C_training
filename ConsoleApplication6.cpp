#include <stdio.h>

int is_larger(int f, int s) {
    int result;
    if (f >= s)
        result = 1;
    if (f < s)
        result = 0;
    return result;
}

int main(){
    int first, second, result;
    printf("Enter two integers.\n");
    scanf_s("%d%d", &first, &second);
    result = is_larger(first, second);
    printf("Result is %d.\n", result);
    return 0;
}