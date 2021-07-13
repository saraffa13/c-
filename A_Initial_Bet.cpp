#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double
bool cellIsValid(ll x,ll y,ll n,ll m,ll arr[n][m]){
    for(ll i=0;i<m;i++){
        if(arr[x][i]==1)
            return false;
    }
    for(ll i=0;i<n;i++){
        if(arr[i][y]==1)
            return false;
    }
    return true;
}
void solve()
{
    ll n, m ,res=0;
    cin >> n >> m;
    ll arr[n][m];
    ll brr[m][n];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if(cellIsValid(i,j,n,m,arr)){
                arr[i][j]=1;
                res++;

            }
        }
    }
    cout<<res<<endl;
}

int main()
{
    ll t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}
