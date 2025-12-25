// structure initialization
struct employee
{
	char name[20];
	int eid;
	int hra;
	int da;
	int basic;
	int tax;
	float tot_sal;
} e = { "priya",101,20,10,3000,10,0.0};
int main()
{
	e.tot_sal=e.basic + ( (e.hra * e.basic)/100.0 ) + ( (e.da * e.basic)/100.0 )-( (e.tax * e.basic)/100.0 );
	printf("\n Employee Salary \n");
	printf("\n Emp Name = %s",e.name);
	printf("\n Emp id = %d ",e.eid);
	printf("\n Total salary = %.2f ",e.tot_sal);
	return 0;
}
