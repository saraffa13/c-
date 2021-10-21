#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double

// ll arr[60];

void solve()
{
   ll l,r;
   cin>>l>>r;
   if(l==r)
   {
       cout<<0<<endl;
       return;
   }
   if(l<=r/2)
   {
       cout<<r%(r/2+1)<<endl;
       return;
   }
   cout<<r%l<<endl;
   return;
   
}

int main()
{
    IOS;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
