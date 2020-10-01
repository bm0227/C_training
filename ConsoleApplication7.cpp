#include <stdio.h>

char to_upper_case(char ch) {
    char capital;
    capital = ch - 32;
    return capital;
}

int main()
{
    char lower, upper;
    printf("알파벳 소문자를 입력하세요.\n");
    scanf_s("%c", &lower);
    upper = to_upper_case(lower);
    printf("소문자 %c의 대문자는 %c입니다.\n", lower, upper);
    return 0;
}