#include<stdio.h>
int main()
{
	int a[10],n,i;
	printf("Enter the no. of elements: ");
	scanf("%d",&n);
	printf("Enter %d elements: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The array elements are: \n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
	return 0;
}
