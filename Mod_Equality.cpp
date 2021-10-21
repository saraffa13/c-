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
     ll n,count=0;
     cin>>n;
     ll arr[n],m=INT_MAX,m2=INT_MAX;

     for(ll i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     sort(arr,arr+n);
     if(arr[n-1]==arr[0]){
         cout<<0<<endl;
         return;
     }
     for(ll i=1;i<n;i++)
     {
         if(arr[i]!=arr[i-1]){
             m2=arr[i];
             m=arr[i-1];
             break;
         }
     }
    //  cout<<m<<" "<<m2<<endl;
     if((m2-1)/2>=m){
         for(ll i=0;i<n;i++){
            if(arr[i]==m2){
                cout<<n-i<<endl;
                return;
            }
         }
     }
     else{
         cout<<n<<endl;
         return;
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
