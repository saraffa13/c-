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
   ll n,m,l,r;
   cin>>m>>n;
   ll arr[n];
   init(arr,n);
   if(m==1){
       cin>>l;
       r=l-1;       
   }
   else{
       cin>>l;
       cin>>r;
       if(l>r)
       {
           swap(l,r);
       }
   }
   sort(arr+l-1,arr+r);
   for(ll i=0;i<n-1;i++)
   {
       if(arr[i]<arr[i+1]){
           cout<<"NO"<<endl;
           return;
       }
   }
   cout<<"YES"<<endl;

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
