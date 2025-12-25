#include<stdio.h>
int main()
{
	int i,n,max=0,tot=0,j,marks[60][3];
	printf("Enter number of students: ");
	scanf("%d",&n);
	printf("Enter %d students marks: \n",n);
	
	for(i=0;i<n;i++)
	{ 
		tot=0;
		for(j=0;j<3;j++)
		{
			scanf("%d",&marks[i][j]);
			tot=tot+marks[i][j];
		}
		if(tot>max)
		{
			max=tot;
		}
	}
	printf("\n Max total: %d",max);
}
