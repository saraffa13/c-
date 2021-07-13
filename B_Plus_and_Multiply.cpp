#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double
void solve(){
  ll n,a,b;
  cin>>n>>a>>b;
  ll ans=1;
  while(ans<=n){
      if((n-ans)%b==0)
      {
          cout<<"Yes"<<endl;
          return;
      }
      ans=ans*a;
      if(a==1)
        break;
  }
  cout<<"No"<<endl;
}

int32_t main(){
    ll t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
