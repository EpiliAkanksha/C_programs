#include<stdio.h>
/*int main()                     // without functions using while loop
{
	int n,res=1,t;
	printf("Enter n value: ");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		res=res*n;
		n=n-1;
	}
	printf("\n The factorial of %d is %d",t,res);
	return 0; 
}*/
/*int main()                         // using for loop
{
	int i,n,res=1;
	printf("Enter n value: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		res=res*i;
	}
	printf("\n The factorial of %d is %d",n,res);
}*/
/*int fact(int n)             // functions with while loop
{
	int res=1;
	while(n>0)
	{
		res=res*n;
		n=n-1;
	}
	return res;
}
int main()
{
	int n,res=1;
	printf("Enter n value: ");
	scanf("%d",&n);
	res=fact(n);
	printf("result: %d",res);
}*/
/*int fact(int n)                //function with for loop
{
	int i,res=1;
	for(i=1;i<=n;i++)
	{
		res=res*i;
	}
	return res;
}
int main()
{
	int n,res;
	printf("Enter n value: ");
	scanf("%d",&n);
	res=fact(n);
	printf("result: %d",res);
}*/
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int main()
{
	int n,res=1;
	printf("Enter n value: ");
	scanf("%d",&n);
	res=fact(n);
	printf("result: %d",res);
}

