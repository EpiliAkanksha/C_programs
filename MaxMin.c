//find which is minimum and maximum in the given array
// int data[]={55,7,88,9,6,41}
#include<stdio.h>
int main()
{
	int data[]={55,7,88,9,6,41};
	int max=data[0];
	int min=data[0];
	int i=0;
	int sum=data[0];
	int avg=data[0];
	int n;
	n=sizeof(data)/sizeof(int);
	
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
	printf("\n sum= %d ",sum);
	printf("\n avg = %d",avg);
	return 0;
}
