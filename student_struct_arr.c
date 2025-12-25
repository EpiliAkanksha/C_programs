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
	struct student s[60];
	int i,sum=0,n,j;
	printf("\n enter number of students: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter student %d name: ",i+1);
		scanf("%s",s[i].name);
		printf("\n enter student %d roll num: ",i+1);
		scanf("%d",&s[i].rollno);
		printf("\n enter student %d three marks: ",i+1);
		sum=0;
		for(j=0;j<3;j++)
		{
			scanf("%d",&s[i].marks[j]);
			sum+=s[i].marks[j];
		}
		s[i].avg=sum/3.0; 
	}
	

	for(i=0;i<n;i++)
	{
		printf("\n student %d data:\n name: %s \n roll num: %d",i+1,s[i].name,s[i].rollno);
		for(j=0;j<3;j++)
		{
			printf("\n marks : %d",s[i].marks[j]);
		}
		printf("\n avg mark: %.2f",s[i].avg);
		
	}
	
	return 0;
}
