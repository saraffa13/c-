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
   ll arr[n];
   cin>>arr[0];
   ll ans=arr[0];
   for(ll i=1;i<n;i++)
   {
       cin>>arr[i];
       ans = ans&arr[i];
   }
   cout<<ans<<endl;

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
