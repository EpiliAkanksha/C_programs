//print n fibonacci series using array[dynamic programming approach]
#include<stdio.h>
/*int main()
{
	int i,n,a[50];
	printf("Enter n value: ");
	scanf("%d",&n);
	a[0]=0;
	a[1]=1;
	printf("%d %d ",a[0],a[1]);
	for(i=2;i<n;i++)
	{
		a[i]=a[i-1]+a[i-2];
		printf("%d ",a[i]);
	}
}*/
/*int main()
{
	int a=0,b=1,c,i,n;
	printf("Enter n value: ");
	scanf("%d",&n);
	printf("%d %d ",a,b);
	for(i=0;i<n-2;i++)
	{
		c=a+b;
		printf("%d  ",c);
		a=b;
		b=c;
	}

}*/
void fib(int n)
{
	int i,a=0,b=1,c;
	printf("%d %d ",a,b);
	for(i=2;i<n;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
}
int main()
{
	int n;
	printf("Enter n value: ");
	scanf("%d",&n);
	fib(n);
}

