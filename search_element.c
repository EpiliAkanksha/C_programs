#include<stdio.h>
int main()
{
	int a[10],n,i,search;
	printf("Enter the no. of elements: ");
	scanf("%d",&n);
	printf("Enter %d elements: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched: \n");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(a[i]==search)
		{
			printf("Element found at %d position",i);
			break;
		}
	}
	if(i==n)
		printf("Element not found");
	return 0;
}
