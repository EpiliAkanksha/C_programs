//give 5 marks for attendance whose attendance is >= 75
// int marks[]={5,6,7,8,1}
// int att[]={55,66,77,22,84}
//print the final marks of each subject
#include<stdio.h>
int main()
{
	int marks[]= {5,6,7,8,1};
	int att[]={55,66,77,22,84};
	int i;
	int n = sizeof(att)/sizeof(int);
	for(i=0;i<n;i++)
	{
		if(att[i]>=75)
		{
			marks[i]=marks[i]+5;	
		}
		printf("\n the final marks : %d",marks[i]);
	}
	return 0;
}
