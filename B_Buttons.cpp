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
  ll n;
  cin>>n;
  ll res=n;
  n--;
  res+=((3*n*(n+1)*(n+1))-(n*(n+1)*(2*n+1)))/6;
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
