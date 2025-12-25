//swap two numbers using call by reference
#include<stdio.h>
/*
void swap(int *a, int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	
}
int main()
{
	int a,b,t;
	printf("Enter a and b: ");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("\n after swapping a :%d  b:%d",a,b);
	return 0;
}*/
//pass by value
void swap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	printf("In swap function a = %d , b = %d",a,b);
}
int main()
{
	int a,b,t;
	printf("Enter a and b: ");
	scanf("%d %d",&a,&b);
	swap(a,b);
	printf("\n in main function,after swapping a :%d  b:%d",a,b);
	return 0;
}


