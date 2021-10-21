#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double

void init(ll arr[], ll n)
{
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
}

bool symmetric(string a,string b)
{
    if
}
void solve()
{
    ll n,m,x,y;
    cin>>n>>m;
    string s="";
    n*=2;
    string arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>x>>y;
        s=to_string(x);   
        s=s+to_string(y); 
        arr[i]=s;     
    }
    if(n%4!=0)
    {
        cout<
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
