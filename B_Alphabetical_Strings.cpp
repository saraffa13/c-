#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
void solve()
{
  string s;
  cin>>s;
  string t=s;
  sort(t.begin(),t.end());
  for(ll i=0;i<t.length()-1;i++){
      if(t[i]+1!=t[i+1]){
          cout<<"NO"<<endl;
          return;
      }
  }
  string res="";
  ll i=0;
  for(char ch='a';ch<='z'&&i<s.length();ch++,i++){
      string a = res + ch;
      string b = ch +res;
      if(s.find(a)!=string::npos)
        {
            res=a;
        }
        else if(s.find(b)!=string::npos)
        {
            res=b;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
  }
  cout<<"YES"<<endl;
  

   
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
