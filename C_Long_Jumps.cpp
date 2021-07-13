#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
void solve()
{
  ll n,finalResult=INT_MIN;
  cin>>n;
  ll arr[n];
  for(ll i=1;i<=n;i++)   
    cin>>arr[i];
  for(ll i=1;i<=n;i++){
      ll sum=i;
      while(sum<=n){
          sum=sum+arr[sum];
        //   res=res+arr[sum];
      }
      finalResult=max(sum-i,finalResult);
  }
  cout<<finalResult<<endl;
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
