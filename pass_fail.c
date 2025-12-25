#include<stdio.h>
int main()
{
	int a[20],i,n,pass,fail,max,min;
	printf("enter the subjects: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n the data from array: ");
	for(i=0;i<n;i++)
	{
		printf(" %d ,",a[i]);
	}
	pass=0;
	fail=0;
	
	for(i=0;i<n;i++)
	{
		if (a[i]>=50)
		{
			pass++;
		}
		if(a[i]<50)
		{
			fail++;
		}
	}
	printf("\n the pass subjects are %d",pass);
	printf("\n the fail subjects are %d",fail);
	return 0;
}
