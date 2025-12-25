#include<stdio.h>

int main()
{
	int arr[10]={12,3,35,6,57,18},i,j,n=6,t; 
	printf("sorted elements in descending order:\n");
	for(i=0;i<n;i++)
	{
		for(j=0; j < n-i-1;j++)
		{
			if(arr[j]< arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;				
			}
		}
		//printf("%4d",arr[n-i-1]);
	}
	for(i=0;i<n;i++)
	{
		printf("%4d",arr[i]);
	}
		
	return 0;
	
}
