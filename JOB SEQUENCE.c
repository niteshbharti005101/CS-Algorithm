#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int profit[],int deadlines[],int lb,int ub)
{
    int l=lb;
    int r=ub;
    int pivot=profit[lb];
    while(l<r)
    {
        while(profit[l] >= pivot)
        {
            l++;
        }
        while(profit[r] <  pivot)
        {
            r--;
        }
        if(l<r)
        {
            swap(&deadlines[l],&deadlines[r]);
            swap(&profit[l],&profit[r]);
        }
    }
    swap(&deadlines[lb],&deadlines[r]);
    swap(&profit[lb],&profit[r]);
    return r;
}
int quick_sort(int profit[],int deadlines[],int lb,int ub)
{
    if(lb<ub)
    {
        int loc=partition(profit,deadlines,lb,ub);
        quick_sort(profit,deadlines,lb,loc-1);
        quick_sort(profit,deadlines,loc+1,ub);
    }
    return 0;
}

int main()
{
    int n=5;
    int max=0;
    int profit[]={1,5,10,15,20};
    int deadlines[]={3,3,1,2,2};
    for(int i=0;i<n;i++)
    {
        if(deadlines[i] >= max)
        {
            max=deadlines[i];
        }
    }
    int slot[max];
    for(int i=0;i<max;i++)
    {
        slot[i]=0;
    }
    printf("PROFIT             = ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",profit[i]);
    }
    printf("\nDEADLINES          = ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",deadlines[i]);
    }
    printf("\n\n");
    quick_sort(profit,deadlines,0,n-1);
    printf("\nPROFIT            = ");
    for(int i=0;i<n;i++)
    {
        printf("%d   ",profit[i]);
    }
    printf("\nDEADLINES          = ");
    for(int i=0;i<n;i++)
    {
        printf("%d   ",deadlines[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(slot[deadlines[i]-1] == 0)
        {
            slot[deadlines[i]-1] = profit[i];
        }
        else
        {
            for(int j=deadlines[i]-1;j>=0;j--)
            {
                if(slot[j] == 0)
                {
                    slot[j] = profit[i];
                }
            }
        }
    }
    int s=0;
    printf("\nJOB PROFIT SEQUENCE\n");
    for(int i=0;i<max;i++)
    {
        s=s+slot[i];
        printf(" %d ",slot[i]);
    }
    printf("\nMAXIMUM PROFIT = %d\n",s);
    return 0;
}
