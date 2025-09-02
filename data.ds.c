#include<stdio.h>
void main()
{
    int n,i,low,high,x[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    low=0;
    high=n-1;
    merge(x,low,high);
}

void merge(int x[],int low,int high)
{
    int mid;
    if(low>=high)
    {
        return ;
    }
    mid=(low+high)/2;
    merge(x,low,mid);
    merge(x,mid+1,high);
    merging(x,low,mid,high);
    void merging(int x[],int low,int mid,int high)
    {
        int i,j,k,l1[20],l2[20],n1,n2;
        n1=mid-low+1;
        n2=high-mid;
        for(i=0;i<n1;i++)
        {
            l1[i]=x[low+1];
        }
        for(j=0;j<n2;j++)
        {
            l2[i]=x[mid+i+j];
        }
        i=0;
        j=0;
        k=low;
        while(i<n1&&j<n2)
        {
            if(l1[i]<l2[j])
            {
                x[k]=l1[i];
                i++;

            }
            else
            {
                x[k]=l2[j];
                j++;

            }
            k++;
        }
        while(i<n1)
        {
            x[k]=l1[i];
            i++;
            k++;
        }
         while(j<n2)
        {
            x[k]=l2[i];
            j++;
            k++;
        }
    }
}