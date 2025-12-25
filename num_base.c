#include<stdio.h>
int main()
{
	int i,j,num,base,temp,r,arr[10];
	printf("enter a number: ");
	scanf("%d",&num);
	printf("enter the base: ");
	scanf("%d",&base);
	temp=num;
	while(num>0)
	{
		r=num%base;
		arr[i]=r;
		num =num/base;
		i++;
	}
	printf("%d %d ",temp,base);
	for(j=i-1;j>=0;j--)
	{
		printf("%d",arr[j]);
	}
	return 0;
	
}
