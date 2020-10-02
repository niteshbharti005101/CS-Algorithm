#include <iostream>
using namespace std;

int main()
{
    int n=10, i;
    int X[n];
    float A[n], s=0;

    for(i=0; i<n; i++)
    {
       cin>>X[i];
       s = s+X[i];
       A[i] = (float) (s/(i+1));
    }
    for(i=0; i<n; i++)
    {
       cout<<A[i]<<"\t";
    }
}