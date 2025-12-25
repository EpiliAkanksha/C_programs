//binary search
#include<stdio.h>
int main()
{
	int arr[100],n,i,key,low,high,mid;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	printf("Enter elements into the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%5d",&arr[i]);
	}
	printf("Enter the element to be searched: ");
	scanf("%d",&key);
	low = 0;
	high = n-1;
	while(low<=high)
	{
		mid = (int)(low+high)/2;
		if(arr[mid]==key)
		{
			printf("Element found at %d position",mid);
			return mid;
		}
		else if(key<arr[mid])
		{
			high = mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	printf("Element not found!");
	return 0;
}
