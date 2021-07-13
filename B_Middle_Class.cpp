#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
void solve()
{
  string t,s="";
  cin>>t;
  bool check=false;
  if(t.find("0") == string::npos){
      check=true;

  }
  if(t.find("1") == string::npos){
      check=true;

  }
  if(check){
      cout<<t<<endl;
      return;
  }
  cout<<t[0];
  for(ll i=1;i<t.length();i++){
      if(t[i]==t[i-1]){
          cout<<(t[i]=='0'?"1":"0")<<endl;
      }
  }
}

int main()
{
    IOS;
    ll t ;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
