#include <stdio.h>
int main()
{
	char ch1[20], ch2[30];
	char ch3;
	printf("이름을 입력을 입력해주세요.\n");
	scanf_s("%s", ch1);
	printf("수강 목적을 입력을 입력해주세요.\n");
	scanf_s("%s", ch2);
	printf("희망 학점을 입력을 입력해주세요.\n");
	scanf_s("%c", ch3);
	printf("이름: %s.\n", ch1);
	printf("수강 목적: %s.\n", ch2);
	printf("희망 학점: %c.\n", ch3);
	return 0;
}