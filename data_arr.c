#include<stdio.h>
int main()
{
	int a[20],i,n,min,max;
	printf("enter the size: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n the data from array: ");
	for(i=0;i<n;i++)
	{
		printf(" %d ,",a[i]);
	}
	min=a[0];
	max=a[0];
	for(i=1;i<n;i++)
	{
		if (a[i]<min)
		{
			min=a[i];
		}
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("\n the mininum value is %d",min);
	printf("\n the maximum value is %d",max);
	return 0;
}
