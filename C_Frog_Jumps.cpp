#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
ll check(ll n){
    return (2*n+3*n*(n-1)/2);
}
void solve()
{
   for(ll i=1;i<=2000000;i++){
       cout<<6*i<<endl;
   }
}


int main()
{
    IOS;
    ll t =1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}
