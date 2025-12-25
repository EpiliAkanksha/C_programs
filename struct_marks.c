#include<stdio.h>
struct student
{
	int rollno;
	char name[50];
	int marks[3];
	float avg;
};
int main()
{
	struct student s1,s2,s3;
	int i,sum=0;
	printf("\n enter student 1 name: ");
	scanf("%s",s1.name);
	printf("\n enter student 1 roll num: ");
	scanf("%d",&s1.rollno);
	printf("\n enter student 1 three marks: ");
	for(i=0;i<3;i++)
	{
		scanf("%d",&s1.marks[i]);
		sum+=s1.marks[i];
	}
	s1.avg=sum/3.0; 
	sum=0;
	printf("enter student 2 name: ");
	scanf("%s",s2.name);
	printf("\n enter student 2 roll num: ");
	scanf("%d",&s2.rollno);
	printf("\n enter student 2 three marks: ");
	for(i=0;i<3;i++)
	{
		scanf("%d",&s2.marks[i]);
		sum+=s2.marks[i];
	}
	s2.avg=sum/3.0;
	sum=0;
	printf("\n enter student 3 name: ");
	scanf("%s",s3.name);
	printf("\n enter student 3 roll num: ");
	scanf("%d",&s3.rollno);
	printf("\n enter student 3 three marks: ");
	for(i=0;i<3;i++)
	{
		scanf("%d",&s3.marks[i]);
		sum+=s3.marks[i];
	}
	s3.avg=sum/3.0;
	printf("\n student 1 data: %s %d",s1.name,s1.rollno);
	for(i=0;i<3;i++)
	{
		printf("\n marks : %d",s1.marks[i]);
	}
	printf("\n avg mark: %f",s1.avg);
	
	printf("\n student 2 data: %s %d",s2.name,s2.rollno);
	for(i=0;i<3;i++)
	{
		printf("\n marks : %d",s2.marks[i]);
	}
	printf("\n avg mark: %f",s2.avg);
	
	printf("\n student 3 data: %s %d",s3.name,s3.rollno);
	for(i=0;i<3;i++)
	{
		printf("\n marks : %d",s3.marks[i]);
	}
	printf("\n avg mark: %f",s3.avg);
	return 0;
}
