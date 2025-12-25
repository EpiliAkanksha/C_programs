#include<stdio.h>
int main()
{
	int num,i;
	
	for(i=1;i<=5;)
	{
		printf("\nenter a num: ");
		scanf("%d",&num);
		if(num<0)
		{
			printf("you have entered negative number!");
			break;
		}
		
		if(num%2==0)
		{
			continue;
		}
	
		printf("\n odd number %d: %d",i,num);
		i++;
		
		
	}
	return 0;
}
