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
    ll k;
    cin>>k;
    if(k==1)
    {
        cout<<1<<" "<<1<<endl;
        return;
    }
    if(k==2){
        cout<<1<<" "<<2<<endl;
        return;

    }
    if(k==3){
        cout<<2<<" "<<2<<endl;
        return;

    }
    
    for(ll i=1;i<k;i++)
    {
        if(k==i*i){
            cout<<i<<" "<<1<<endl;
            return;
        }
        if(i*i+1>k)
        {
            if(k<=(i-1)*(i-1)+i)
            {
                cout<<k-(i-1)*(i-1)<<" "<<i<<endl;
                return;
            }
            else{
                cout<<i<<" "<<i*i-k+1<<endl;
                return;
            }
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
