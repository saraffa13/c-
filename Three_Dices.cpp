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
   ll x,y;
   cin>>x>>y;
   ll sum=x+y;
   if(sum>6)
   {
       sum=6;
   }
   sum=6-sum;
   
   cout<<1.0*sum/6<<endl;
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
