#include<stdio.h>
int k=51;
int main()
{
	auto int i=10,j=5;
	i=i+j*2;
	{
		//int i=7,j=20;
		k=3;
		printf("inside  block\n");
		j=i-j;
		printf("%d %d ",i,j); // i=20 j=15 
		j++;
		k=k*2; //k=6
	}
	printf("\nout of block\n");
	printf("%d %d ",i,j);
	printf("\n %d",k);
	return 0;
}
