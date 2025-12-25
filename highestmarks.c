//find the highest subject mark and subject name
//  int marks[] = { 11, 3,  44, 5,  66}
//  char subjs[]= {'E','S','M','C','P'}
// E-ENGLISH    S-Social  M-Math  C-Chemistry  P->Programming

#include<stdio.h>
int main()
{
	int marks[]={11,33,66,5,44};
	char *subjs[]={"English","Social","Math","chemistry","programming"};
	int hm=marks[0];
	int i,pos=0;
	for( i=1;i<5;i++)
	{
		if(marks[i]>hm)
		{
			hm=marks[i];
			pos=i;
				
		}
	
	}
	printf("highest marks= %d",hm);
	printf("\n sub index= %d",pos);
	printf("\n subject name= %s \n",subjs[pos]);	
	
	/*switch(subjs[pos])
	{
		case 'E':printf("English");
		break;
		case 'S':printf("social");
		break;
		case 'M':printf("Math");
		break;
		case 'C':printf("chemistry");
		break;
		case 'P':printf("programming");
		break;
	}*/
	return 0;
}
