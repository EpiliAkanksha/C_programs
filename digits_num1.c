#include<stdio.h>
int main()
{
	int num,arr[10],i=0,d,j;
	printf("enter a number: ");
	scanf("%d",&num);
	
	if(num<0)
	{
		printf("-num");
		num=- num;
	}
	while(num>0)
	{
		d=num%10;
		num=num/10;
		arr[i]=d;
		i++;
	}
	for(j =i-1;j>=0;j--)
	{
	//	printf("%d ",arr[j]);
		switch(arr[j])
		{
			case 0: printf("zero ");
			break;
			case 1: printf("one ");
			break;
			case 2: printf("two ");
			break;
			case 3: printf("three ");
			break;
			case 4: printf("four ");
			break;
			case 5: printf("five ");
			break;
		}
	}
	return 0;
}
