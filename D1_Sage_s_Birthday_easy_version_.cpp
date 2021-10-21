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
   cin>>n;
   ll arr[n];
   for(ll i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   sort(arr,arr+n);
//    if(n&1){
        cout<<(n&1?n/2:n/2-1)<<endl;
        for(ll i=1;i<n;i+=2)
        {
            swap(arr[i],arr[i-1]);
        }
        for(ll i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }

//    }
//    else{

//    }
   

}

int main()
{
    IOS;
    ll t=1;
    // ll t;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}
