#include<stdio.h>
int main()
{
	int amount=627,cc,i,tot_cc=0;
	int d[]={200,100,50,20,10,5,2,1};
	i=0;
	while(amount!=0)
	{
		cc=amount/d[i];
		tot_cc=tot_cc+cc;
		if(cc>0)
		{
			printf("\n no. of %d : %d ",d[i],cc);
		}
		amount=amount%d[i];
		i++;
		
	}
	printf("\n total no. of currencies: %d",tot_cc);
	return 0;
}
