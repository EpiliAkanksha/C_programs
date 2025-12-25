// looping statements
// for
// while
// do while
// loop may be finite or infinite
// print all odd natural numbers from 1 to N
// 	for(initialization; condition; op)
//	{  statements...
//	}
 //n=8
 // 1 3 5 7
 // 2 4 6 8
# include<stdio.h>
int main()
{
	int i,n;
	printf("\n Enter n : ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++ )
	{
		
		if(i%2==1) //odd
			printf("%d ",i);	
	}
	printf("\n");
	for(i=1; i<=n; i++ )
	{
		if(i%2==0) //even
			printf(" %d ",i);
			
	}
	
	return 0;
}
