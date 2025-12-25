#include<stdio.h>
int main()
{
	int a,p,q,r,s,z;
	printf("enter a four digit number: ");
	scanf("%d",&a);
	if(a>=1000&& a<=9999)
	{
		
	
		p=a%10;  // a=1234
		a=a/10;
		q=a%10;
		a=a/10;
		r=a%10;
		s=a/10;
		z=p+q+r+s;
		printf(" the sum is : %d+%d+%d+%d=%d",s,r,q,p,z);
	}	
	else
	{
		printf("not a four digit number");
	}
	return 0;
}
