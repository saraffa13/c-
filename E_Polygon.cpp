#include<bits/stdc++.h>
// ============================================================================================================================================================================#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
// ============================================================================================================================================================================
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define min4(a,b,c,d) min(a,min(b,min(c,d)))
#define min3(a, b, c) min(a, min(b, c))
#define min5(a,b,c,d,e) min(a,min(b,min(c,min(d,e))))
// ============================================================================================================================================================================
const int N  = 1e5 +1;
// ============================================================================================================================================================================
ll in()
{
    ll x;cin>>x;return x;
}
int In()
{
    int x;cin>>x;return x;
}
// ============================================================================================================================================================================
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    for (ll i = 2; i < n; i++)
        if (n % i == 0)
            return false;  
    return true;
}
// ============================================================================================================================================================================

// ============================================================================================================================================================================

void solve()
{
  ll n=in();
//   ll arr[n][n];
vector<string>arr(n);
  for( ll i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  for( ll i=0;i<n;i++)
  {
      for(ll j=0;j<n;j++)
      {
          if(arr[i][j]=='1'&&i!=n-1&&j!=n-1)
          {
              if(arr[i+1][j]=='0'&&arr[i][j+1]=='0'){
                  cout<<"NO"<<endl;
                  return;
              }
          }
      }
  }
//   for( ll i=0;i<n;i++)
//   {
//       for(ll j=0;j<n;j++)
//       {
//           cout<<arr[i][j];
//       }
//       cout<<endl;
//   }
  cout<<"YES"<<endl;
  return;
//

}

// ============================================================================================================================================================================


int main()
{
    IOS;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

// ============================================================================================================================================================================