//使用转义序列
#include <stdio.h>

float salary;

int main()
{
	printf("Enter your desired mouthly salary:");
	printf("$_______\b\b\b\b\b\b\b");
	scanf("%f", &salary);
	printf("\n\t$%.2f a mouth is $%.2f a year.", salary, salary * 12.0);
	printf("\rGee!\n");	
	
	return 0;
}
