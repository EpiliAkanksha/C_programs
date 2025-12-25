# include<stdio.h>
int main()
{
	int i; // declaration
	int j=5; // initialization
	int k;
	int m;
	i=7; // assignment
	k= i || 8;  // logical or  // 7 || 8
	printf("logical or  ===> k = %d ",k);
	m = i | 8; // bitwise or   
	// 0 1 1 1
	// 1 0 0 0
	//----------
	// 1 1 1 1
	printf("\nbitwise or ===> m = %d ",m);
	
	
	return 0;
	
}

