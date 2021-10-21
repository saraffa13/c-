#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double


void solve()
{
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<int>());
        for(ll i=0;i<n;i++){
            cout<<arr[i]<<" ";;
        }
        cout<<endl;
        
}

int main()
{
    ll t ;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
