// find avg of 3 numbers
# include <stdio.h>
int main()
{
	int a,b,c;
	float d;
	printf("\n Enter a,b,c : ");
	scanf("%d%d%d",&a,&b,&c);
	d= (a+b+c)/3.0;
	printf("\n Avg = %.2f",d);
	return 0;
}
