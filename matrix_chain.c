#include <stdio.h>
#include <stdlib.h>
int Matrix_Multiplication(int d[],int n)
{
    int p[n];
    int m[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 || j==0  || i==j)
                m[i][j]=0;
            p[i]=d[i];
        }
    }
    int j,min,q;
    for(int d=1;d<n-1;d++)
    {
        for(int i=1;i<n-d;i++)
        {
            j=i+d;
            min=32762;
            for(int k=i;k<=j-1;k++)
            {
                q=m[i][k]+m[k+1][j]+(p[i-1] * p[j] * p[k]);
                if(q<min)
                {
                    min=q;
                }
            }
            m[i][j]=min;
        }
    }
    return (m[1][n-1]);
}
int main()
{
    int dimension[]={5,4,6,2,7};
    int n=sizeof(dimension)/sizeof(dimension[0]);
    int m=Matrix_Multiplication(dimension,n);
    printf("\nMINIMUM NO OF MULTIPLICATION=%d",m);
    return 0;
}
