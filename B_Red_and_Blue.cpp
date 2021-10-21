#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double

bool prime (ll n)
{
    for(ll i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
void solve()
{
    ll n,m,h1=INT_MIN,h2=INT_MIN;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>m;
    ll brr[m];
    for(ll i=0;i<m;i++)
    {
        cin>>brr[i];
    }
    for(ll i=1;i<n;i++)
    {
        arr[i]=arr[i]+arr[i-1];
    }
    for(ll i=1;i<m;i++)
    {
        brr[i]=brr[i]+brr[i-1];
    }
    for(ll i=0;i<n;i++){
        h1=max(h1,arr[i]);
    }
    for(ll i=0;i<m;i++){
        h2=max(h2,brr[i]);
    }
    // cout<<h1<<" ";
    // cout<<h2<<endl;
    h1=h1>0?h1:0;
    h2=h2>0?h2:0;
    ll sum=h1+h2;
    if(sum<0){
        cout<<0<<endl;
        return;
    }
    cout<<sum<<endl;
    return;

}

int main()
{
    ll t ;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
