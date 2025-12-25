#include<stdio.h>
int main()
{
	int data[50],n,i=0, max, min;
	float sum, avg;
	
	//read n, size of the array
	printf("enter the size of n = ");
	scanf("%d",&n);
	//reading elements into an array
	printf("enter elements into the array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&data[i]);
	}	
	max=data[0];
	min=data[0];
	sum = data[0];
	avg=0.0;
	for(i=1;i<n;i++)
	{
		if(data[i]>max)
		{
			max=data[i];
		}
		if (data[i]<min)
		{
			min=data[i];
		}
		sum=sum+data[i];		
	}
	avg = sum/n;
	printf("the max number=%d ",max);
	printf("\n the min number=%d ",min);
	printf("\n sum= %.2f ",sum);
	printf("\n avg = %.2f",avg);
	return 0;
}
