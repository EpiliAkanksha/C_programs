#include<stdio.h>
int main()
{
	int n1,n2,temp,total,i,d,ctr=0;
	printf("enter n1: ");
	scanf("%d",&n1);
	printf("enter n2: ");
	scanf("%d",&n2);
	for(i=n1;i<=n2;i++)
	{
		temp=i;
		total =0;
		while(temp>0)
		{
			d=temp%10;
			total=total+d*d*d;
			temp=temp/10;
		}
		if(i==total)
		{	ctr=ctr+1;
			printf("\nthe amstrong numbers are: %3d",i);
			
		}
		
	}
	printf("\n total num of amstrong numbers: %3d",ctr);
	return 0;
}
