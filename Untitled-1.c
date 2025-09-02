#include<stdio.h>
#include<stdlib.h>
struct node
{
    int co;
    int ex;    
    struct node *nxt;
}*tp1,*kp,*tp2,*tp3,*lp,*head1=NULL,*head2=NULL,*head3=NULL;
struct node* poly(int a,int b,struct node *head)
{
    kp=(struct node *)malloc(sizeof(struct node));
    kp->co=a;
    kp->ex=b;
    if(head == NULL)
    {
        kp->nxt=NULL;
        head=kp;
    }
    else
    {
        lp=head;
        while(lp->nxt !=NULL)
            lp=lp->nxt;
        kp->nxt=NULL;
        lp->nxt=kp;
    }
    return head;   
}
void traversal(struct node *head)
{
    lp=head;
    while(lp->nxt!=NULL)
    {
        printf("%d",lp->co);
        printf("x^(%d)+",lp->ex);
        lp=lp->nxt;
    }
    if(lp->ex!=0)
        printf("%dx^(%d)",lp->co,lp->ex);
    else
    printf("%d",lp->co);
}
struct node *sum(struct node *head1,struct node *head2,struct node *head3)
{
    tp1=head1;
    tp2=head2;
    while((tp1 != NULL &&  tp2 !=NULL))
    {
        if(tp1->ex > tp2->ex)
        {
          head3=poly(tp1->co,tp1->ex,head3);  
          tp1=tp1->nxt;
        }
        else if(tp1->ex < tp2->ex)
        {
            head3=poly(tp2->co,tp2->ex,head3);
            tp2 = tp2->nxt;
        }
        else
        {
            int sum = tp1->co + tp2->co;
            if (sum != 0) 
                head3=poly(sum,tp1->ex,head3);
            tp1 = tp1->nxt;
            tp2 = tp2->nxt;
        }
    }
    if(tp1==NULL&&tp2==NULL)
    {
        return head3;
    }
    else if(tp1==NULL)
    {
        head3=poly(tp2->co,tp2->ex,head3);
        tp2 = tp2->nxt;
    }
    else if(tp2==NULL)
    {
        head3=poly(tp1->co,tp1->ex,head3);  
        tp1=tp1->nxt;
    }
    return head3;
}
int main()
{
    int e1,n,i,c1;
    printf("enter the total number of term(s) in the polynomial one:");
    scanf("%d",&n);
    printf("Enter the  first polynomial co-effient and exponent value(s):");
    for(i=0;i<n;i++)
    {
      scanf("%d",&c1);  
      scanf("%d",&e1);
      head1=poly(c1,e1,head1);
    }
    printf("enter the total number of term(s) in the polynomial two:");
    scanf("%d",&n);
    printf("Enter the  second polynomial co-effient and exponent value(s):");
    for(i=0;i<n;i++)
    {
      scanf("%d",&c1);  
      scanf("%d",&e1);
      head2=poly(c1,e1,head2);
    }
    head3=sum(head1,head2,head3);
    traversal(head3);
    return 0;
}