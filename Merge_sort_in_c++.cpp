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
void merge(ll arr[], ll l, ll m, ll r) 
{ 
    ll i, j, k; 
    ll n1 = m - l + 1; 
    ll n2 = r - m; 

    ll L[n1], R[n2]; 

    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1 + j]; 
  
    
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arr[k] = L[i]; 
            i++; 
        } 
        else { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 

void mergeSort(ll arr[], ll l, ll r) 
{ 
    if (l < r) { 
        ll m = l + (r - l) / 2; 
        mergeSort(arr, l, m); 
        mergeSort(arr, m + 1, r); 
        merge(arr, l, m, r); 
    } 
} 
  

void printArray(ll arr[],ll n) 
{ 
    for (ll i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
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
    ll arr[n];
    loop(i,n){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    printArray(arr,n);
    cout<<"\n";}
    
    
   
}