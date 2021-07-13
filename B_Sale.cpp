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
    ll m,n,k=0,res=0;
    cin>>m>>n;
    ll arr[m];
    for(ll i=0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr,arr+m);
    while(n--){
        if(arr[k]<0)
            res+=abs(arr[k++]);
    }
    cout<<res<<endl;
}

int main()
{
    IOS;
    ll t=1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}
