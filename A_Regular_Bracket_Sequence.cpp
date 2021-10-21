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
ll lcm(ll a,ll b){
    if(a>b)
        swap(a,b);
    for(ll i=1;;i++){
        if(b*i%a==0)
            return b*i;
    }
}

void solve()
{
  string s;
  cin>>s;
  while(s.length()>0){
      if(s.find("()")!=string::npos){
          s.erase(s.find("()"),2);
      }
      else if(s.find("?(?)")!=string::npos){
          s.erase(s.find("?(?)"),4);
      }
      else if(s.find("(?)?")!=string::npos){
          s.erase(s.find("(?)?"),4);
      }
      else if(s.find("?)")!=string::npos){
          s.erase(s.find("?)"),2);
      }
      else if(s.find("(?")!=string::npos){
          s.erase(s.find("(?"),2);
      }
      else if(s.find("??")!=string::npos){
          s.erase(s.find("??"),2);
      }
      else{
          break;
      }
  }
  if(s.length()==0)
  {
      cout<<"YES"<<endl;
  }
  else{
      cout<<"NO"<<endl;
  }
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
