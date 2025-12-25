//euclidian algorithm for findng gcd of two numbers

#include<stdio.h>
int gcd(int a,int b)
{
	int rem;
	while(b!=0)
	{
		rem=a%b;
		a=b;
		b=rem;
	}
	return a;
}
int main()
{
	int a,b,result,lcm;
	printf("enter a and b: ");
	scanf("%d %d",&a,&b);
	result=gcd(a,b);
	lcm=(a*b)/result;
	printf("\n gcd: %d",result);
	printf("\n lcm: %d",lcm);
	return 0;
}
