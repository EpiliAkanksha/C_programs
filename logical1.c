# include<stdio.h>
int main()
{
	int i; // declaration
	int j=5; // initialization
	int k;
	int m;
	i=7; // assignment
	k= i && 8;  // logical and  // 7 && 8
	printf("logical and ===> k = %d ",k);
	m = i & 8; // bitwise and   
	// 0 1 1 1
	// 1 0 0 0
	//----------
	// 0 0 0 0
	printf("\nbitwise and ===> m = %d ",m);
	
	
	return 0;
	
}

