#include<stdio.h>
int main()
{
	/*int i;
	for(i=1;i<=100;i++)
	{
		if(i%3==0)
		printf("%d \t",i);
	}*/
	int i;
	int ctr=0;
	for(i=10;i>=0;i-=2)
	{
		printf(" %d",i);
		ctr++;
		if(ctr%3==0)
		{
			printf("\n");
		}
	}
	return 0;
}
