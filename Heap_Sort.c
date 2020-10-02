#include <stdio.h>
#include <stdlib.h>
void print(int *,int);
void swap(int *,int *);
void max_heap(int *,int,int);
void heap_sort(int *,int);
int main()
{
    int arr[]={12, 11, 13, 5, 6, 7};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("SIZE OF ARRAY=%d\n",n);
    printf("ORIGINAL ARRAY:");
    print(arr,n);
    printf("\n================================================\n");
    heap_sort(arr,n);
    printf("\nSORTED ARRAY ARRAY:");
    print(arr,n);
    printf("\n*************************************************************\n");
    return 0;
}
void print(int arr[],int n)
{
    printf("\n| ");
    for(int i=0;i<n;i++)
    {
        printf(" %d |",arr[i]);
    }
}
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
void max_heap(int arr[],int n,int i)
{
    int largest=i;
    int l=(2*i)+1;
    int r=(2*i)+2;
    while(l<n&&arr[l]>arr[largest])
    {
        largest=l;
    }
    while(r<n&&arr[r]>arr[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
        swap(&arr[i],&arr[largest]);
        max_heap(arr,n,largest);
    }
}
void heap_sort(int arr[],int n)
{
    for(int i=(n/2)-1;i>=0;i--)
    {
        max_heap(arr,n,i);
    }
    for(int i=n-1;i>=0;i--)
    {
        swap(&arr[0],&arr[i]);
        max_heap(arr,i,0);
    }
}
