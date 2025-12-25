
#include<stdio.h>
int main()
{
	int n,marks,i,total;
	n=5;
	total=0;
	for(i=1;i<=n;i++)
	{
	
		printf("enter %d marks: ",n);
		scanf("%d",&marks);
		if(marks<0)
		{
			continue;
		}
		else
		{
			total=total+marks;
		
		}
		
	}
	printf("total marks: %d",total);
	return 0;
}
