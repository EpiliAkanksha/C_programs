#include<stdio.h>
int main()
{
	int i,j,a[10],n,temp;
	printf("\n Enter the elements in the array upto 10 numbers: ");
	scanf("%d",&n);
	printf("\n enter %d elements: \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\n the reverse array is: ");
	for(i=n-1;i>=0;i--)
	{
		printf("%4d",a[i]);
	}
	return 0;
}
