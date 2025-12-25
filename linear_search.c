//linear search
#include<stdio.h>
int main()
{
	int arr[100],n,i,key;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	printf("Enter elements into the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%5d",&arr[i]);
	}
	printf("Enter the element to be searched: ");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			printf("Element is found at %d position",i);
		}
		else
		{
			printf("Element not found");
			return -1;
		}
			
	}
	return 0;
}
