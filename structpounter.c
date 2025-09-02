#include<stdio.h>
struct node
{
   int data;
   struct node*next;
};
void main()
{
   struct node*head,*newnode,*temp;
   int choice=1;
   head=0;
   while(choice==1)
   {
     newnode=(struct node*)malloc(sizeof(struct  node));
     printf("enter data");
     scanf("%d",&newnode->data);
     newnode->next=NULL;
     if(head==0)
     head=newnode=temp;
     else
     {
        temp->next=
        newnode;
        temp=newnode;

     }
     printf("enter 1 to continue and 0 to stop");
     scanf("%d",&choice);
   }
   temp=head;
   while(temp!=0)
   {
    printf("%d",temp->data);
    temp=temp->next;
   }
   
}
