#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back
#define loop(x,n) for(int x = 0; x < n; x++)
#include <bits/stdc++.h> 
using namespace std; 

long long int input(){
    ll n;
    cin>>n;
    return n;
 
}
void bucketSort(long double arr[],ll n) 
{ 
   
    vector<long double> b[n]; 

    for (int i = 0; i < n; i++) { 
        int bi = n * arr[i]; 
        b[bi].push_back(arr[i]); 
    } 

    for (int i = 0; i < n; i++) 
        sort(b[i].begin(), b[i].end()); 

    int index = 0; 
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < b[i].size(); j++) 
            arr[index++] = b[i][j]; 
} 

    
int main() {
 
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    ll n=input();
    long double arr[n];
    loop(i,n){
        cin>>arr[i];
    }
    bucketSort(arr,n);
    loop(x,n){
        cout<<arr[x]<<" ";
    }
   
    cout<<"\n";}
    
    
   
}