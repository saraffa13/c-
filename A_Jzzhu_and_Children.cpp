#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double


void solve()
{
    ll n,m,res=0,k=0,val=0;
    cin>>n>>m;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(ll i=0;i<n;i++)
    {
        if(arr[i]>m)
            k++;
        arr[i]=ceil(1.0*arr[i]/m);
    }

    if(k==0)
    {
        cout<<n<<endl;
        return;
    }
    for(ll i=0;i<n;i++)
    {
        if(arr[i]>=val)
        {
            val=arr[i];
            res=i+1;
        }

    }
    cout<<res<<endl;
    return;
    
    
}

int main()
{
    ll t =1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}
