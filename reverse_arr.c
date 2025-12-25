#include<stdio.h>
int main()
{
	int i,j,a[10],t,n;
	printf("\n enter number of elements in the array upto 10: ");
	scanf("%d",&n);
	printf("\n enter %d elements: \n",n);
	// reading array
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	// reversing of the array
	for(i=0,j=n-1 ;  i<j ;  i++,j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	//printing array
	printf("\n the reverse array is: ");
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
	return 0;
}
