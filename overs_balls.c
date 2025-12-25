#include <stdio.h>
int main()
{
	int nb=27,overs,lb;
	overs=nb/6;
	lb=nb%6;
	printf("no. of overs: %d",overs);
	printf("\n left over balls: %d",lb);
	return 0;
}
