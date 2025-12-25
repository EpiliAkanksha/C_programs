#include<stdio.h>
int main()
{
	int n,i;
  	printf("Enter an integer: ");
  	scanf("%d", &n);
	if(n<0)
	{
		n = n * -1;
	}
  	for(i = 1; i <= 10; ++i)
	{
    	printf("%d * %d = %d \n", n, i, n * i);
		
	}
	return 0;
}
