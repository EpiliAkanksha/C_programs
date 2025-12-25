#include<stdio.h>
#include<stdlib.h>
struct node
{
	int roll_num;
	char name[100];
	struct node*next;
};
int main()
{
	int i,n,roll;
	char name[100];
	struct node*ptr,*head=NULL,*temp;
	printf("Enter the num of nodes: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		ptr = (struct node*)malloc(sizeof(struct node));
		printf("Enter the roll num: \n");
		scanf("%d",&roll);
		ptr->roll_num=roll;
		printf("Enter the name: \n");
		fflush(stdin);
		gets(name);
		strcpy(ptr->name,name);
		ptr->next=NULL;
		if(head==NULL)
		{
			head=ptr;
		}
		else
		{
			temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=ptr;
		}
	}
	printf("The linked list elements are: ");
	temp=head;
	while(temp!=NULL)
	{
		printf("%5d",temp->roll_num);
		printf("%20s",temp->name);
		temp = temp->next;
	}
	return 0;
}
