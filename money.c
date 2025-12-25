#include<stdio.h>
int main()
{
	int amount=551,t=200,h=100,f=50,tw=20,ten=10,fi=5,two=2,o=1,cc;
	while(amount!=0)
	{
		cc=amount/t;
		if(cc>0)
		{
			printf("\n no. of 200: %d ",cc);
		}
		amount=amount%t;
		cc=amount/h;
		if(cc>0)
		{
			printf("\n no. of 100: %d",cc);
		}
		amount=amount%h;
		cc=amount/f;
		if(cc>0)
		{
			printf("\n no. of 50: %d",cc);
		}
		amount=amount%f;
		cc=amount/tw;
		if(cc>0)
		{
			printf("\n no. of 20: %d",cc);
		}
		amount=amount%tw;
		cc=amount/ten;
		if(cc>0)
		{
			printf("\n no. of 10: %d",cc);
		}
		amount=amount%ten;
		cc=amount/fi;
		if(cc>0)
		{
			printf("\n no. of 5: %d",cc);
		}
		amount=amount%fi;
		cc=amount/two;
		if(cc>0)
		{
			printf("\n no. of 2: %d",cc);
		}
		amount=amount%two;
		cc=amount/o;
		if(cc>0)
		{
			printf("\n no. of 1: %d",cc);
		}
		amount=amount%o;
	}
	return 0;
}
