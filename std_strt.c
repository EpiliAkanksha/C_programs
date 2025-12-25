typedef struct 
{
	int rollno;
	char name[20];
	char grade;
} student;
int main()
{
	student s1,s2;
	
	s1.rollno=101;
	strcpy(s1.name,"priya");
	s1.grade='S';
	
	s2.rollno=102;
	strcpy(s2.name,"sriya");
	s2.grade='B';
	printf("\n From s1 \n");
	printf("\n Rollno = %d",s1.rollno);
	printf("\n Name = %s",s1.name);
	printf("\n Grade = %c",s1.grade);
	
	printf("\n From s2 \n");
	
	printf("\n Rollno = %d",s2.rollno);
	printf("\n Name = %s",s2.name);
	printf("\n Grade = %c",s2.grade);
	
}
