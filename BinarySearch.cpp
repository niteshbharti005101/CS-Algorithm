#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){

    int start = 0; 
    int end=n-1;

    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]>key){
           end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            return mid;
        }
        // else{
        //     cout<<"Element not found";
        // }
    }
    return -1;
}

int main(){
    int n, key, arr[100];
    cout<<"Enter how many elements you want to enter: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element you want to find: ";
    cin>>key;
    cout<<BinarySearch(arr, n, key)<<endl;
    return 0;
}