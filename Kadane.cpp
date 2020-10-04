#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[100];
    int SumTillNow=0, MaxSum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        SumTillNow+=arr[j];
        if(SumTillNow<0){
            SumTillNow=0;
        }
        if(SumTillNow>MaxSum){
            MaxSum=SumTillNow;
        }
    }
    cout<<"Max Sum of array is: "<<MaxSum;
    return 0;
}