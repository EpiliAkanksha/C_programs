//nested structure: structure within a structure is known as nested structure
struct student
{
	int rollno;
	char name[20];
	struct DOB{
		int d,m,y;
	} dob;
}s1;
int main()
{
	s1.rollno=101;
	strcpy(s1.name,"priya");
	s1.dob.d=1;
	s1.dob.m=1;
	s1.dob.y=2007;
	printf("\n roll number: %d",s1.rollno);
	printf("\n name: %s",s1.name);
	printf("\n DOB: %d-%d-%d",s1.dob.d,s1.dob.m,s1.dob.y);
	
	
	
}
