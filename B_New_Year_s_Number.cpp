#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
void solve()
{
   ll n;
   cin>>n;
   ll rem=n%2020;
   ll que = n/2020;
   if(rem<=que)
   {
       cout<<"YES"<<endl;
   }
   else 
   {
       cout<<"NO"<<endl;
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
