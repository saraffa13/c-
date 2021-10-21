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
  ll r,g,b,w;
  cin>>r>>g>>b>>w;
  ll odd=0,even=0;
  if(r%2==0)
    even++;
  else odd++;
  if(g%2==0)
    even++;
  else odd++;
  if(b%2==0)
    even++;
  else odd++;
  if(even==3||odd==3){
    cout<<"Yes"<<endl;
    return;}
  if(odd==2&&w%2==1&&r!=0&&g!=0&&b!=0){
      cout<<"Yes"<<endl;
        return;
  }
  else if(even==2&&w%2==0)
  {
      cout<<"Yes"<<endl;
      return;
  }
  cout<<"No"<<endl;
  return;
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
