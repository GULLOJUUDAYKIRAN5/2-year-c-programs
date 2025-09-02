#include<stdio.h>
struct node
{
	int data;
	struct node*next;
};
void main()
{
	struct node*newnode,*temp,*head;
	int count=1;
	head=0;
	while(count==1)
	{   
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		printf("1 or 0");
		scanf("%d",&count);
	

	}
	
	temp=head;
	while(temp!=0)

	{
		printf("%d",temp->data);
		temp=temp->next;
		
	}
	


}