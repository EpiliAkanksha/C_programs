//linear search
#include<stdio.h>
int main()
{
	int arr[100],n,i,j,temp;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	printf("Enter elements into the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%5d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Elements after sorting: ");
	for(i=0;i<n;i++)
	{
		printf("%5d",arr[i]);
	}
	
	return 0;
}
