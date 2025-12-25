
# include<string.h>
#include<stdio.h>
struct student
{
	int rno;
	char name[20];
}s1,s2,s3;
int main()
{
	printf("Enter name and rno of s1 :");
	scanf("%s %d",s1.name,&s1.rno);
	printf("Enter name and rno of s2 :");
	scanf("%s %d",s2.name,&s2.rno);
	printf("\n name and rno of s1 :");
	printf("\n Rollno = %d ",s1.rno);
	printf("\n Name = %s ",s1.name);
	
	printf("\n name and rno of s2 :");
	printf("\n Rollno = %d ",s2.rno);
	printf("\n Name = %s ",s2.name);
	
	return 0;
}

