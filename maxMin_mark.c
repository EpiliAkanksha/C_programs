#include<stdio.h>
void print_subname(ind)
{
	printf("\n subject name: ");
	switch(ind)
	{
		case 0: printf("chemistry");
		break;
		case 1: printf("Maths");
		break;
		case 2: printf("physics");
		break;
		case 3: printf("social");
		break;
		case 4: printf("english");
		break;
		case 5: printf("lab 1");
		break;
		case 6: printf("mechanical ");
		break;
	}
}
int main()
{
	int a[20],i,n,max,min,max_index,min_index;
	printf("enter the subjects: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n the data from array: ");
	for(i=0;i<n;i++)
	{
		printf(" %d ,",a[i]);
	}
	max=a[0];
	max_index=0;
	min=a[0];
	min_index=0;
	for(i=0;i<n;i++)
	{
		if (a[i]>max)
		{
			max=a[i];
			max_index=i;
		}
		if(a[i]<min)
		{
			min=a[i];
			min_index=i;
		}
	}
	printf("\n the max mark is %d",max);
	print_subname(max_index);
	printf("\n the min mark is %d",min);
	print_subname(min_index);
	
	return 0;
}
