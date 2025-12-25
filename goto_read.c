#include<stdio.h>
int main()
{
	int num;
	read_num: 
	printf("\nenter a number: ");
	scanf("%d",&num);
	if(num<=0)
	{
		printf("\n Your number is not positive. Please enter a positive number!");
		goto read_num;
	}
	printf("%d is positive",num);
	printf("\n sqrt: %.2f",sqrt(num));
	return 0;
}
