#include<stdio.h>
int main()
{
	char a[40];
	int i=0,ctr=0;
	printf("enter your name: ");
	scanf("%s",a);
	for(i=0;a[i]!=0;i++)
	{
		ctr++;
		//printf("\n %c",a[i]);
		//printf("\n %s",a+i);
		printf("\n %s",&a[i]);
	}
	printf("\n the number of letters in the name: %d",ctr);
	return 0;
}
