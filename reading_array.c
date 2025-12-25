//reading elements into an array & display it
#include<stdio.h>
int main()
{
	int data[50],n,i;
	printf("enter the size of n = ");
	scanf("%d",&n);
	printf("enter elements into the array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&data[i]);
	}
	printf("the array elements are: \n");
	for(i=0;i<n;i++)
	{
		printf("%3d",data[i]);
	}
}
