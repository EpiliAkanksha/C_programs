// looping statements
// for
// while
// do while
// loop may be finite or infinite
// print all natural numbers from 1 to N
// 	for(initialization; condition; op)
//	{  statements...
//	}
# include<stdio.h>
int main()
{
	int i,n;
	printf("\n Enter n : ");
	scanf("%d",&n);
	for(i=1; i <= n; i++ )
	{
		printf(" %d ",i);
	}
	
	return 0;
}
