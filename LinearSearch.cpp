#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter length of array: ";
    cin>>n;
    int arr[100], key;
    cout<<"Enter element you want to find:";
    cin>>key;
    cout<<"Enter elements in array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j;
    for(j=0;j<n;j++){
        if(arr[j]==key){
            cout<<key<<" found at "<<j<<" position";
            break;
        }
    }
    if(j==n){
        cout<<key<<" is not present"<<endl;
    }
    return 0;
}