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
    cin >> n;
    ll arr[n],sum=0,c1=0,c2=0;
    //    ll sum = init(arr,n);
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
            c1++;
        else    
            c2++;
    }
    if(c1%2==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    if(c1==0&&c2%2==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    return;
    
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
