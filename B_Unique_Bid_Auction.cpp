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


void solve()
{
    map<ll ,ll>m;
    ll n,res=0;
    cin>>n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];  
        m[arr[i]]++;

    }
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    for(auto x:m){
        if(x.second==1){
            res=x.first;
            break;
        }
    }
    if(res==0){
        cout<<-1<<endl;
        return;
    }
    for(ll i=0;i<n;i++){
        if(arr[i]==res)
        {
            cout<<i+1<<endl;
            return;
        }

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
