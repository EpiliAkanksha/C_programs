# include <stdio.h>
void print_num(int ,int);
int main()
{
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	print_num(1,n);
	return 0;
}
void print_num(int s ,int e)
{
	if(s <= e) // base condtion
	{
		print_num(s+1,e);
		printf("%d ",s);
		
		
	}
	else
	{
		return;
	}
}
