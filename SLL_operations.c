#include<stdio.h>
#include<stdlib.h>
struct node
{
	int value;
	struct node*next;
};
struct node* head=NULL;
int count_node = 0;
void create_sll(int n)
{
	int i, data;
	struct node*ptr,*temp;	
	for(i=0;i<n;i++)
	{
		ptr = (struct node*)malloc(sizeof(struct node));
		printf("Enter the value: \n");
		scanf("%d",&data);
		ptr->value=data;
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
		count_node++;
	}
}
void insert_beg(int data)
{
	struct node* ptr;
	ptr = (struct node*)malloc(sizeof(struct node));
	ptr->value = data;
	ptr->next=NULL;
	if(head==NULL)
	{
		head=ptr;
	}
	else
	{
		ptr->next =head;
		head = ptr;
		printf("Node inserted at beginning!");
	}
}
void insert_end(int data)
{
	struct node* ptr,*temp;
	ptr = (struct node*)malloc(sizeof(struct node));
	ptr->value = data;
	ptr->next=NULL;
	if(head==NULL)
	{
		head=ptr;
	}
	else
	{
		temp  = head;
		while(temp->next!=NULL)
		{
			temp = temp->next;
		}
		temp->next = ptr;
		printf("Node inserted at end!");
	}
	
}
void insert_pos(int data, int pos)
{
	struct node* ptr,*temp;
	int i;
	ptr = (struct node*)malloc(sizeof(struct node));
	ptr->value = data;
	ptr->next=NULL;
	temp =head;
	for(i=1;i<pos-1;i++)
	{
		temp=temp->next;
	}
	if(pos>1 && pos<count_node)
	{
		ptr->next = temp->next;
		temp->next=ptr;
	}
	else
	{
		printf("Not an middle position!");
	}
	printf("Node inserted at mid position!");
}
void delete_beg()
{
	if(count_node == 1)
	{
		printf("Node deleted: %d", head->value);
		head = NULL;
	}
	else
	{
		printf("Node deleted: %d", head->value);
		head = head->next;
	}
	printf("Node deleted at beginning!");
}
void delete_end()
{
	struct node* temp,*prev;
	if(count_node == 1)
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
	printf("Node deleted at end!");
}
void delete_pos(int pos)
{
	struct node* prev,*temp;
	int i;
	prev=temp=head;
	for(i=1;i<pos;i++)
	{
		prev = temp;
		temp = temp->next;
	}
	if(pos>1 && pos<count_node)
	{
		printf("Node deleted %d",temp->value);
		prev->next =temp->next;
	}
	else
	{
		printf("Not an middle position!");
	}
	printf("Node deleted at mid position!");
}
void display(struct node* head)
{
	struct node* temp=head;
	printf("The linked list elements are: ");	
	while(temp!=NULL)
	{
		printf("%5d",temp->value);
		temp = temp->next;
	}
}
int menu()
{
	int ch;

	printf("\n1.create a SLL\n 2.insert at beg\n 3.insert at end\n 4.insert at pos\n 5.delete at beg\n 6.delete at end\n 7.delete at pos\n 8.display\n");
	printf("Enter your choice: ");
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
					create_sll(n);
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
			case 8: display(head);
					break;
			default: printf("Invalid choice!!");exit(0);
		}
	}	
	return 0;
}
