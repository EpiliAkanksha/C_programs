#include<stdio.h>
#include<stdlib.h>
struct node
{
	int value;
	struct node *prev,*next;
};
struct node *head=NULL;
int count_node = 0;
void create_dll(int n)
{
	int i;
	struct node *ptr,*temp ;
	
	for(i=0;i<n;i++)
	{
		ptr = (struct node*)malloc(sizeof(struct node));
		printf("Enter the values: ");
		scanf("%d",&ptr->value);
		ptr->prev = NULL;
		ptr->next = NULL;
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
			ptr->prev=temp;
			temp->next=ptr;	
		}
		count_node++;
	}	
}
void insert_beg(int data)
{
	struct node *ptr;
	ptr = (struct node*)malloc(sizeof(struct node));
	ptr->value=data;
	ptr->prev = NULL;
	ptr->next = NULL;
	if(head==NULL)
	{
		head=ptr;
	}
	else
	{
		ptr->next=head;
		head->prev=ptr;
		head=ptr;
	}
	count_node++;
	printf("Node inserted at beginning successfully!!");
}
void insert_end(int data)
{
	struct node *ptr,*temp;
	ptr = (struct node*)malloc(sizeof(struct node));
	ptr->value=data;
	ptr->prev = NULL;
	ptr->next = NULL;
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
		ptr->prev=temp;
		temp->next=ptr;
	}
	count_node++;
	printf("Node inserted at end successfully!!");
	
}
void insert_pos(int data, int pos)
{
	struct node *ptr, *temp;
	int i;
	ptr = (struct node*)malloc(sizeof(struct node));
	ptr->value=data;
	ptr->prev = NULL;
	ptr->next = NULL;
	
	if(pos>1 && pos<count_node)
	{
		temp=head;
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		temp->next->prev=ptr;
		ptr->next=temp->next;
		ptr->prev=temp;
		temp->next=ptr;
	}
	else
	{
		printf("Not an middle position!");
	}
	count_node++;
	printf("Node inserted at mid position!");
}
void delete_beg()
{
	if(head==NULL)
	{
		printf("Linked list is empty");
		return;
	}
	else if(count_node == 1)
	{
		printf("Node deleted: %d", head->value);
		head = NULL;
	}
	else
	{
		printf("Node deleted: %d", head->value);
		head = head->next;
		head->prev=NULL;
	}
	count_node--;
	printf("Node deleted at beginning!");
}
void delete_end()
{
	struct node* temp,*prev;
	if(head==NULL)
	{
		printf("Linked list is empty");
		return;
	}
	else if(count_node == 1)
	{
		printf("Node deleted: %d", head->value);
		head = NULL;
	}
	else
	{
		temp = prev = head;
		while(temp->next!=NULL)
		{
			prev = temp;
			temp = temp->next;
		}
		
		printf("Node deleted: %d", temp->value);
		prev->next = NULL;
	}
	count_node--;
	printf("Node deleted at end!");
}
void delete_pos(int pos)
{
	struct node *temp;
	int i;
	temp=head;
	for(i=1;i<pos;i++)
	{
		temp = temp->next;
	}
	if(pos>1 && pos<count_node)
	{
		printf("Node deleted %d",temp->value);
		temp->next->prev=temp->prev;
		temp->prev->next=temp->next;
	}
	else
	{
		printf("Not an middle position!");
	}
	count_node--;
	printf("Node deleted at mid position!");
}
void display_forward()
{
	struct node* temp=head;
	printf("The linked list elements are: ");	
	while(temp!=NULL)
	{
		printf("%5d",temp->value);
		temp = temp->next;
	}
}
void display_backward()
{
	struct node* temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	printf("The linked list elements are: ");	
	while(temp!=NULL)
	{
		printf("%5d",temp->value);
		temp = temp->prev;
	}
}
void count_nodes()
{
	printf("Number of nodes: %d",count_node);
	return;
}
void count_odd_even()
{
	struct node *temp;
	int odd=0,even=0;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->value%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		temp=temp->next;
	}
	printf("\n no. of odd values: %d",odd);
	printf("\n no. of even values: %d",even);
	
	
}
int menu()
{
	int ch;

	printf("\n 1.create a DLL\n 2.insert at beg\n 3.insert at end\n 4.insert at pos\n 5.delete at beg\n 6.delete at end\n 7.delete at pos\n 8.display forward\n 9.display backward\n 10.count nodes\n 11.count odd even\n");
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	return ch;
}
int main()
{
	int ch,data,pos, n;	
	while(1)
	{
		ch = menu();
		switch(ch)
		{
			case 1: printf("Enter the num of nodes: ");
					scanf("%d",&n);
					create_dll(n);
					break;
			case 2: printf("Enter data: ");
					scanf("%d",&data);
					insert_beg(data);
					break;
			case 3: printf("Enter data: ");
					scanf("%d",&data);
					insert_end(data);
					break;				
			case 4: printf("Enter data: ");
					scanf("%d",&data);
					printf("Enter pos: ");
					scanf("%d",&pos);
					insert_pos(data, pos);
					break;
			case 5: delete_beg();
					break;
			case 6: delete_end();
					break;
			case 7:	printf("Enter pos: ");
					scanf("%d",&pos);
					delete_pos(pos);
					break;
			case 8: display_forward();
					break;
			case 9: display_backward();
					break;
			case 10:count_nodes();
					break;
			case 11:count_odd_even();
					break;
			default: printf("Invalid choice!!");exit(0);
		}
	}	
	return 0;
}
