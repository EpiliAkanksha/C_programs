#include<stdio.h>
#include<stdlib.h>
struct node
{
	int value;
	struct node *next;
};
int main()
{
	int i,n,val;
	struct node *temp,*p,*head=NULL;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		temp = (struct node*)malloc(sizeof(struct node));
		printf("Enter the value: ");
		scanf("%d",&val);
		temp->value=val;
		temp->next=NULL;
		if(head==NULL)
			head=temp;
		else
		{
			p = head;
			while(p->next!=NULL)
				p = p->next;
			p->next = temp;
		}
	}
	printf("The linked list elements are: \n");
	p=head;
	while(p!=NULL)
	{
		printf("%d \t",p->value);
		p = p->next;
	}
	printf("\n");
	return 0;
}


