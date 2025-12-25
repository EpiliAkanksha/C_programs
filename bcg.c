//break continue goto
int main()
{
	int i;
	for(i=1; i<20; i++)
	{
			printf("\n Hello ... ");
			if( i > 3)
				goto last;
			if(i%3==0)
				continue;
			if( i % 7 == 0)
				break;
			printf(" %d",i);
	}
	last:  printf("I m at end ...");
	return 0;
	
}

