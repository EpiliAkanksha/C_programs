// read 3 numbers find sum and avg
# include <stdio.h>
int main()
{
	int a,b,c,d;
	float e;
	printf("\n Enter a,b,c : ");
	scanf("%d%d%d",&a,&b,&c);
	d=a+b+c;
	e=(float)d/3;
	printf("\n sum = %d   avg = %.2f",d,e);
	return 0;
}

// find the sum of following series
// 1 + 1/2 + 1/3 + 1/5 + 1/7
