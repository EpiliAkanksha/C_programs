// allocate mem for n elements and then add n1 elemewnt
# include<stdlib.h>
int main()
{
	int *a;
	int n,n1,ns,sum=0,i;
	printf("Enter n : ");
	scanf("%d",&n);
	a= (int *)malloc(n*sizeof(int));
	printf("Enter n data \n");
	for(i=0; i < n ; i++)
	{
		scanf("%d",a+i);
		sum = sum + *(a+i);
		
	}
	printf("\n sum of %d ele = %d",n,sum);
	printf("\nEnter some more : ");
	scanf("%d",&n1);
	
	a=(int*)realloc(a,n+n1);
	ns=n+n1;
	for(i=n;i<ns;i++)
	{
	
		scanf("%d",a+i);
		sum = sum + *(a+i);
		
	}
	printf("\n sum of %d ele = %d",ns,sum);
	
	
	
}
