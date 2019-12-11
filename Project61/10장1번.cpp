#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double change(int a);

int main()
{
	double inch;
	printf("인치 입력: ");
	scanf_s("%lf", &inch);
	printf("%finch = %.2fcm \n", inch, change(inch));

	return 0;
}

double change(int a)
{
	double cm;
	cm = (a * 2.54);
	return (cm);
}