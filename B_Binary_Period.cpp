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
  if(t.length()==2)
 {
     cout<<t<<endl;
     return;
 }
  if(t.find('0') == string::npos){
      check=true;

  }
  if(t.find('1') == string::npos){
      check=true;

  }
  if(check){
      cout<<t<<endl;
      return;
  }
//   cout<<t[0];
s=s+t[0];
  for(ll i=1;i<t.length();i++){
      if(t[i]==t[i-1]){
          s=s+(t[i-1]=='0'?"1":"0");
          t.insert(i,(t[i-1]=='0'?"1":"0"));
            i++;
      }
      else{
          s=s+t[i];
      }
  }
  cout<<s<<endl;

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
