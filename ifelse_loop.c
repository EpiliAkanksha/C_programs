#include<stdio.h>
int main()
{
	int num,i=0;
	printf("\n enter a number: ");
	scanf("%d",&num);
	//for(i=0;;i++)   //infinite loop
	//while(i<=5)    //finite loop
	//while(1)     //infinite loop . 0 is false and non-zero is true(+ve or -ve). It is entry control loop
	do             //It is an exit control loop.
	{
		if(num<=0)
		{
			printf("\n Your number is not positive. Please enter a positive number!");
			printf("\n enter a number: ");
			scanf("%d",&num);
		}
		else
		{
			printf("\n %d is a positive number",num);
			printf("\n sqrt= %.2f",sqrt(num));
			break;
			
		}
		//i++;
		
	}while(0);
	printf("\n Bye!!");
	return 0;
	
}
