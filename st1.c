struct student
{
	int rollno;	
	char name[20];
	float avg;
	
	
}s={101,"priya",23.56},t={102,"sriya",45.67}; // structure initialization

int main()
{
	printf("\n Details of student 1 :\n");
	printf("\n Rollno = %d",s.rollno);
	printf("\n Name = %s",s.name);
	printf("\n Avg = %.2f",s.avg);
	
	printf("\n Details of student 2 :\n");
	printf("\n Rollno = %d",t.rollno);
	printf("\n Name = %s",t.name);
	printf("\n Avg = %.2f",t.avg);
	return 0;
	
}
