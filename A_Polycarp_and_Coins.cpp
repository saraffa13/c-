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
    ll n,c1,c2;
    cin>>n;
    if(n%3==2){
        c2=n/3+1;
        c1=n-(2*c2);
    }
    else{
        c2=n/3;
        c1=n-(c2*2);
    }
    cout<<c1<<" "<<c2<<endl;
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
