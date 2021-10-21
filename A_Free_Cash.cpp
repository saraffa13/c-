#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double


void solve()
{
    
        ll n,a,b,res=1,k=1;
        pair<ll , ll >p;
        cin>>n;
        pair<ll, ll>arr[n];
        for( ll i=0 ;i<n;i++)    
        {
            cin>>a>>b;
            p.first=a;
            p.second=b;
            arr[i]=p;
        }
        for( ll i=1;i<n;i++)    
        {
            if(arr[i]==arr[i-1])
            {
                k++;
            }
            else{
                k=1;
            }
            res=max(res,k);

        }
        cout<<res<<endl;

}

int main()
{
    ll t =1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}
