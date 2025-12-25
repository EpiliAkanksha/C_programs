/*
	structure is collection of heterogeneous data.
	struct allows to define user defined data types.
	structure uses two accessing operators.
	a) .  ( to be used with simple structure variable)
	b) -> ( to be used with pointer structure variable..)
	
	struct complex
	{
		int real,img;
	};
	int main()
	{
		struct complex   c1,c2,c3,*cp ;
		c1.real =2;
		c1.img = 3;
		c2.real=4;
		c2.img=3;
		cp=&c3;
		cp->real=c1.real*c2.real-c1.img*c2.img;
		cp->img = c1.real * c2.img + c2.real * c1.img;
		printf("%d + %d i ",c3.real,c3.img);
		
	}
	
*/
struct complex
	{
		int real,img;
	};
struct complex add(struct complex c1, struct complex c2)
{    	struct complex c3;
		c3.real=c1.real+c2.real;
		c3.img = c1.img + c2.img;
		return c3;
}
	int main()
	{
		struct complex   c1,c2,c3,*cp ;
		c1.real =2;
		c1.img = 3;
		c2.real=4;
		c2.img=3;
		
		cp=&c3;
		
		cp->real=c1.real*c2.real-c1.img*c2.img;
		cp->img = c1.real * c2.img + c2.real * c1.img;
		printf("\n Mul =  %d + %d i ",c3.real,c3.img);
		c3 =add(c1,c2);
		printf("Add = %d + %d i ",c3.real,c3.img);
		
	}

