#include <stdio.h>

int main(void) {
	int a,b;
	printf("数字を1つ入力してください");
	scanf_s("%d", &a);
	printf("数字をもう1つ入力してください");
	scanf_s("%d", &b);
	printf("入力された数字の合計はは%dです", a+b);
	return (0);
}