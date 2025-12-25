typedef struct node
{
	int val;
	struct node *next;
}node;

void insert_at_beg(node *head,int d)
{
	node *newnode = (node *)malloc(sizeof(node));
	newnode->val=d;
	newnode->next=NULL;
	if(head==NULL)
		head=newnode;
	else
	{
	
		newnode->next=head;
		head=newnode;
	}
}


