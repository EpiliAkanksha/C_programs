#include<stdio.h>
int main()
{
	int n,m,pc=0,nc=0,zc=0,i;
	printf("enter number of exams: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("enter your marks of %dth exam: ",i);
		scanf("%d",&m);
		if(m>0)
		{
			pc++;
		}
		else if(m<0)
		{
			nc++;
		}
		else
		{
			zc++;	
		}
			
	}
	printf("\n number of positive marks: %d",pc);
	printf("\n number of negative marks: %d",nc);
	printf("\n number of zero marks: %d",zc);
	
	return 0;
}
