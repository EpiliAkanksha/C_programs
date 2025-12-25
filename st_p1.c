# include<string.h>
#include<stdio.h>
struct student
{
	int rno;
	char name[20];
}s1,s2,s3;
int main()
{
	s1.rno=101;
	strcpy(s1.name,"priya");
	printf("\n Rollno = %d ",s1.rno);
	printf("\n Name = %s ",s1.name);
	printf("\n");
	s2.rno=202;
	strcpy(s2.name,"sriya");
	printf("\n Rollno = %d ",s2.rno);
	printf("\n Name = %s ",s2.name);
	printf("\n");
	s3.rno=303;
	strcpy(s3.name,"harshitha");

	printf("\n Rollno = %d ",s3.rno);
	printf("\n Name = %s ",s3.name);
	return 0;
}

