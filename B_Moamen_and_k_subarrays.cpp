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
#define MIN -1e9;

void init(ll arr[], ll n)
{
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
}

void solve()
{
    ll n,k,x;
    cin>>n>>k;
    vector<pair<ll,ll>>arr(n);
    // vector<pair<ll,ll>>arr(n);
    for(ll i=0;i<n;i++)
    {
        cin>>x;
        arr[i].first=x;
        arr[i].second=i;
    }
    sort(arr.begin(),arr.end());
    ll count=1;
    for(ll i=0;i<n-1;i++)
    {
        if(arr[i].second!=arr[i+1].second-1)
            count++;
    }
    if(count>k)
    {
        cout<<"No"<<endl;
        return;
    }
    cout<<"Yes"<<endl;

    
    



    


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
