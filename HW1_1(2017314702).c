#include<stdio.h>

int main()
{
	int number;
	printf("Enter an integer number\n");
	scanf_s("%d", &number);

	if (number < 100) printf("Your number is smaller than 100\n\n");
	else printf("Your number contains more than twd digits\n");

}