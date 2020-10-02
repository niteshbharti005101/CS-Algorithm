#include <iostream>
using namespace std;

int main()
{
    int n = 10, i, j;
    int X[n]; 
    float A[n];
    float s;

    for(i=0; i<n; i++)
    {
        cin>>X[i];
    }

    for(i=0; i<n; i++)
    {
        s = X[0];
        for(j=1; j<=i; j++)
        {
            s = s+X[j];
        }
        A[i] = (float)(s/(i+1));
    }

    for(i=0; i<n; i++)
    {
        cout<<A[i]<<"\t";
    }

}
