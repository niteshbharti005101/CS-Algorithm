#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back
#define loop(x,n) for(int x = 0; x < n; x++)
#include <bits/stdc++.h> 
#define RANGE 255 
using namespace std; 

long long int input(){
    ll n;
    cin>>n;
    return n;
 
}
void solve(){
    long long int n;
    cin>>n;
    long long int arr[n]={0};
    arr[n]=0;
    for(int i=1;i<=n-1;i++){
        long long int h;
        cin>>h;
        arr[h]=1;
}
for(int j=1;j<=n;j++){
    if(arr[n]==0){
        cout<<n;
        break;
    }
    if(arr[j]==0){
        cout<<j;
    }
}
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
       solve();
   
    cout<<"\n";}
    
    
   
}