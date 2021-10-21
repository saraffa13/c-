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
  ll x,y;
  cin>>x>>y;
  if(x==1&&y==1){
      cout<<1<<endl;
      return;
  }
  if(x==y){
      cout<<x*x-x+1<<endl;
      return;
  }
  if(x<y){
      if(y%2==1)
      {
          cout<<y*y-x+1<<endl;
          return;
      }
      else{
          cout<<(y-1)*(y-1)+x<<endl;
          return;
      }
  }
  else{
      if(x%2==0)
      {
          cout<<x*x-y+1<<endl;
          return;
      }
      else{
          cout<<(x-1)*(x-1)+y<<endl;
          return;
      }
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
