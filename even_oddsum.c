#include<stdio.h>
int main()
{
	int num,d,odd_sum=0,even_sum=0;
	printf("enter a number: ");
	scanf("%d",&num);
	if(num<0)
	{
		printf("-");
		num=-num;
	}
	while(num > 0)
	{
		d = num % 10;
		if(d % 2 == 0)
		{
			even_sum+=d;
		}
		else
		{
			odd_sum+=d;
		}
		num=num/10;
	}
	
	printf("\n odd sum : %d",odd_sum);
	printf("\n even sum: %d",even_sum);
	return 0;
}
