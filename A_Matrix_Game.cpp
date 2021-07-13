#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
void solve()
{
    
    ll n, m ,res;
    cin >> n >> m;
    ll arr[n][m];
    unordered_set<ll>r;
    unordered_set<ll>c;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j]==1){
            r.insert(i);
            c.insert(j);

            }
        }
    }
    res=min(n-r.size(),m-c.size());
    cout<<((res%2==1)?"Ashish":"Vivek")<<endl;
}

int main()
{
    IOS;
    ll t ;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
