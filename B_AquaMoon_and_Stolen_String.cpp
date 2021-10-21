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
  ll n,m;
  cin>>n>>m;
  string arr[2*n-1];
  for(ll i=0;i<2*n-1;i++)
  {
      cin>>arr[i];
  }
  ll x  ;
  string res="";
  for(ll j=0;j<m;j++){
      x=0;
    for(ll i=0;i<2*n-1;i++)
    {
         x = (int)arr[i][j]^x;
    }
    res=res+(char)(x);

  }
  cout<<res<<endl;
  

}

int main()
{
    IOS;
    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
