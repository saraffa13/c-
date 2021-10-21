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

void init(ll arr[], ll n)
{
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
}

void solve()
{
    ll m;
    cin>>m;
    
    ll arr[2][m];
    init(arr[0],m);
    init(arr[1],m);
    if(m==1)
    {
        cout<<0<<endl;
        return;
    }
    if(m==2)
    {
        cout<<(min(arr[0][1],arr[1][0]))<<endl;
        return;
    }
    // ll res=INT_MAX;
    for(ll i=0;i<2;i++){
        for(ll j=1;j<m;j++)
        {
            arr[i][j]=arr[i][j]+arr[i][j-1];
        }
    }
    ll res=arr[0][m-1]-arr[0][0];
    for(ll i=0;i<m-1;i++){
        res=min(res,max(arr[1][i],arr[0][m-1]-arr[0][i+1]));
    }
    cout<<res<<endl;

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
