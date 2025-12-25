#include<stdio.h>
int main()
{
	int n=5,i,j,arr[5],temp,m1,m2;
	printf("enter %d elements: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//rev
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	printf("The array elements after reversing: \n");
	for(i=0;i<n;i++)
	{
		printf("%4d",arr[i]);
	}
	m1=arr[0];
	m2=arr[0];

	for(i=1;i<n;i++)
	{	//to find max number
		if(arr[i]>m1)
		{
			m1=arr[i];
		}
		if(arr[i]<m2)
		{
			m2=arr[i];
		}
	}
	printf("\n the max num is %d",m1);
	printf("\n the min number is %d",m2);
	
	return 0;
}
