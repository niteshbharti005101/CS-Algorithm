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
bool Match(char *text, char *pat) 
{ 
    if (*text == '\0' && *pat != '\0') 
        return false; 
  
    if (*pat == '\0') 
        return true; 
  
    if (*text == *pat) 
        return Match(text + 1, pat + 1); 
  
    return false; 
} 

bool check(char *text, char *pat) 
{ 
    if (*text == '\0') 
        return false; 

    if (*text == *pat) 
        if(Match(text, pat)) 
            return 1; 
        else
          return check(text + 1, pat); 
  
    return check(text + 1, pat); 
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
        char s1[100],s2[100];
        cin>>s1>>s2;
        cout<<check(s1,s2);
   
    cout<<"\n";}
    
    
   
}