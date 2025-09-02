#include<stdio.h>
struct node
{
    int data;
    struct node*next,*pre;
};
struct node*head=0,*temp;
void create()
{
    int n,c=0;
    struct node*new;
    printf("enter how many number of nodes should be created\n");
    scanf("%d",&n);
    printf("enter %d nodes\n",n);
    while(n>c)
    {
        new=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&new->data);
        new->next=0;
        new->pre=0;
        if(head==0)
        {
            head=temp=new;
            c++;
        }
        else
        {
            temp->next=new;
            new->pre=temp;
            temp=new;
            c++;

        }
    }
}
void del_specific()
{
    int d;
    printf("enter what to be del");
    scanf("%d",&d);
    temp=head;
    while(temp->data!=d)
    {
        temp=temp->next;
    } 
    temp->pre->next=temp->next;
    temp->next->pre=temp->pre;
    free(temp);
    display();
}
void del_start()
{
    temp=head;
    temp->next->pre=0;
    head=temp->next;
    free(temp);
    display();
}
void del_end()
{
    temp=head;
    while(temp->next!=0)
    {
    temp=temp->next;
    }
temp->pre->next=0;
free(temp);
display();
}
void display()
{
    temp=head;
    while(temp!=0)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void add_start()
{   
    struct node*new;
    temp=head;
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the data to be added");
    scanf("%d",&new->data);
    temp->pre=new;
    new->next=temp;
    head=new;
    display();
}
void add_end()
{
   struct node*new=(struct node*)malloc(sizeof(struct node));
   printf("enter what ot be added at end");
   scanf("%d",&new->data);
   temp=head;
   while(temp->next!=0)
   {
    temp=temp->next;
    }
    new->pre=temp;
    temp->next=new;
    new->next=0;
    display();
}
void add_specific()
{    int c;

    struct node*new=(struct node*)malloc(sizeof(struct node));
    printf("enter what ot be added");
    scanf("%d",&new->data);
    printf("at what data it should be added");
    scanf("%d",&c);
    temp=head;
    while(temp->data!=c)
    {
        temp=temp->next;
    }
    new->pre=temp->pre;
    temp->pre=new;
    new->next=temp;
   temp=head;
   while(temp->next->data!=c)
   {
    temp=temp->next;
   }
   temp->next=new;
   display();
}
void search()
{
    int c,m=1;
    printf("enter the data to be searched");
    scanf("%d",&c);
    temp=head;
    while(temp->data!=c)
    {
        if(temp->next==0)
        {
            printf("the element is not present\n");
            break;
        }
         temp=temp->next;
         m++;
    }
    printf("%d\n",m);
}
void main()
{
    int m;
    create();
    while(1)
    {
    printf("enter 1 for traversal\n");
    printf("enter 2 for deleting at specific position\n");
    printf("enter 3 for deleting at start\n");
    printf("enter 4 for deleting at end\n");
    printf("enter 5 for adding at the start\n");
    printf("enter 6 for adding at the end\n");
    printf("enter 7 for adding at the specific position\n");
    printf("enter 8 for searching any element position\n");
    printf("enter 9 for exit\n");
    scanf("%d",&m);
    if(m==1){
    display();
    printf("-----------------------------------------------------------------\n");
    }
    else if(m==2){
    del_specific();
     printf("-----------------------------------------------------------------\n");
    }
    else if(m==3){
    del_start();
     printf("-----------------------------------------------------------------\n");
    }
    else if(m==4)
    {
    del_end();
     printf("-----------------------------------------------------------------\n");
    }  
    else if(m==5)
    {
       add_start();
        printf("-----------------------------------------------------------------\n");
    }
    else if(m==6)
    {
    add_end();
     printf("-----------------------------------------------------------------\n");
    }
    else if(m==7)
    {
       add_specific();
        printf("-----------------------------------------------------------------\n");
    }
    else if(m==8)
    {
        search();
         printf("-----------------------------------------------------------------\n");
    }
    else if(m==9)
    {
         printf("-----------------------------------------------------------------\n");
    break;
    }
    }
}