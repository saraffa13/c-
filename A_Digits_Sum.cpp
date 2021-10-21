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
    if(n<9)
    {
        cout<<0<<endl;
        return;
    }
    ll a=n%10;
    ll b=n/10;
    if(a==9){
        cout<<b+1<<endl;
        return;
    }
    cout<<b<<endl;
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
