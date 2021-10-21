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
  string s,t;
  cin>>s>>t;
  string a=s,b=t;
  while(true){
      if(s.length()==t.length()){
          if(s==t){
            cout<<s<<endl;
            return;
            }
          else {
            cout<<-1<<endl;
            return;
          }        
      }
      if(s.length()<.length())
        s+=a;
      else  t+=b;

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
