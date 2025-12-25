#include<stdio.h>
int main()
{
	int a,b,c,d;
	float r1,r2;
	printf("enter the values of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a==0)
	{
		printf("not a quadratic equation");
	}
	else
	{
		d=b*b-4*a*c;
		
		if(d<0)
		{
			printf("roots are imaginary");
		}
		else
		{
			if(d==0)
			{
				r1=-b/(2*a);
				r2=r1;
				printf("roots are equal");
				printf("%.2f %.2f",r1,r2);
				
			}
			else
			{
				printf("roots are real & distinct");
				r1=-b+sqrt(d)/2*a;
				r2=-b-sqrt(d)/2*a;
				printf("%.2f %.2f",r1,r2);
			}
			
		}
	}
	return 0;
}
