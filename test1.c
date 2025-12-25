typedef struct student  // user defined datatype
{
	int rno;
	char name[25];  // string
	char grade;
} std;
# define MAXITEM 100  // named macro  or named constant
# define MAXORDER 20  //
int main()
{
	std  s1,s2;
	s1.rno=25;
	strcpy(s1.name,"Hasini Sri");
	s1.grade='A';
	printf("\n %d %s %c",s1.rno,s1.name,s1.grade);
	
	s2.rno=26;
	strcpy(s2.name,"sonal");
	s2.grade='A';	
	printf("\n %d %s %c",s2.rno,s2.name,s2.grade);
	
	printf("\n maxitem = %d   maxorder=  %d",MAXITEM,MAXORDER);
}
