#include<stdio.h>
int main()
{
	int arr[10],n,i,max;
	top:
	printf("\n enter the size of array(upto 10): ");
	scanf("%d",&n);
	if(n>10)
	{
		printf("\n invalid size");
		goto top;
	}
	printf("\n enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("\n maximum value is: ",max);
	return 0;
}
