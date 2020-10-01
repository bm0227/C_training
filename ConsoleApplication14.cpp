#include <stdio.h>

int main()
{
    int num;
    int i = 0;
    char ch;
    char str[100];
    printf("Enter the key.\n");
    scanf("%d", &num);
    scanf("%c", &ch);
    printf("Enter the text.\n");
    while (1) {
        scanf("%c", &ch);
        if (ch == '\n') {
            str[i] = '\0';
            break;
        }
        str[i] = (ch + num) % 128;
        i++;
    }
    printf("%s", str);
    return 0;
}