#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double

vector<ll>v;

void init()
{
    for(ll i=1;i<10000;i++)
    {
        if(i%3!=0&&(i%10)!=3)
        {v.push_back(i);}
    }
   
}


void solve()
{
    ll k;
    cin>>k;
    cout<<v[k-1]<<endl;

   
}

int main()
{
    IOS;
    // ll t=1;
    ll t;
    cin >> t;
    while (t--){
init();
        solve();
    }

    return 0;
}
