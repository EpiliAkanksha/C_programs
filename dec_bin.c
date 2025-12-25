#include<stdio.h>
void dec_bin(int);
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("\n Decimal to binary equivalent : ");
	dec_bin(n);	
	return 0;
}
void dec_bin(int n)
{
	if(n < 2)
	{
		printf("%d",n);
		return;
	}
	else {
		dec_bin(n/2);
		printf("%d",n%2);
	}
}
