#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
bool isUpper(char c){
    return (c>=65&&c<=90);
}
bool isLower(char c){
    return (c>=97&&c<=122);
}
bool checkMistake(string s,int l){
    for(ll i=1;i<l;i++){
        if(isLower(s[i]))     return false;
    }
    return true;    
}
void solve()
{
  ll n,m;
  cin>>n>>m;
  ll arr[m];
  for(ll i=0;i<m;i++)
    cin>>arr[i];
  ll res=0,prev=1;
  for(ll i=0;i<m;i++){
      if(arr[i]>=prev){
          res+=(arr[i]-prev);
          prev=arr[i];
      }
      else{
          res+=(n+arr[i]-prev);
          prev=arr[i];
      }
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
