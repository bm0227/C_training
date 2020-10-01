#include <stdio.h>

int main()
{
    int num, i, j, k = 0;
    printf("Enter the number.\n");
    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        for (j = 0; j <= i; j++)
            printf("*");
        printf("\n");
    }
    for (i = 1; i <= num; i++) {
        for (j = 0; j < i; j++)
            printf("%d", j+1);
        printf("\n");
    }
    for (k = i; k <= num; k++) {
        printf(" ");
    }
    for (i = 0; i < num; i+=2) {
        for (j = i; j < num - 1; j+=2) {
            printf(" ");
        }
        for (k = 0; k < i * 2 + 1; k+=2){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}