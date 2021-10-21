#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
#define MAX 1e5 + 1;
// #define MIN -e5;
bool isPallin(string s, int n){
    for(ll i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-1-i])
            return false;
    }
    return true;
}
void solve()
{
   ll n;
   cin>>n;
   ll arr[n+1];
   for(ll i=1;i<=n;i++)
    cin>>arr[i];
   if(arr[1]==1){
       cout<<n+1<<" ";
       for(ll i=1;i<=n;i++)
        cout<<i<<" ";
        cout<<endl;
   }
   else if(arr[n]==0){
       for(ll i=1;i<=n+1;i++)
       cout<<i<<" ";
       cout<<endl;
   }
   else{
       for(ll i=2;i<n;i++)
       {
           if(arr[i]==1&&arr[i-1]==0){
               for(ll j=1;j<=i-1;j++)
               {
                   cout<<j<<" ";
               }
               cout<<n+1<<" ";
               
               for(ll j = i;j<=n;j++)
               {
                   cout<<j<<" ";
               }
               cout<<endl;
               return ;
           
           }
       }
   }

}

int main()
{
    IOS;
    // ll t=1;
    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
