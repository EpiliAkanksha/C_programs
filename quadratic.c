# include<stdio.h>
int main()
{
	int a,b,c,d;
	int op;
	float r1,r2;
	printf("Enter a,b,c ");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	if( a==0)
	{
		printf("\n Not a quadratic equation..");
		
	}
	else
	{
	
		if( d < 0)
		{	
			op=-1;
			
		}
		else if( d >0)
		{
			op=1;
			
			
		}
		else 
		{
			op=0;
			
			
		}
		switch(op)
		{
			case -1: printf("\n Roots are imaginary..."); break;
			case 1 : 
					printf("\n Roots are real and distinct..");
					r1=(-b + sqrt(d))/2*a;
					r2=(-b - sqrt(d))/2*a;
					printf("\n Root1 = %f",r1);
					printf("\n Root2 = %f",r2);
					break;
			case 0:
					printf("\n Roots are real and equal..");
					r2=r1=(-b )/2*a;
					
					printf("\n Root1 = %f",r1);
					printf("\n Root2 = %f",r2);
					break;
			
		}
	}
	
	return 0;
	
}

