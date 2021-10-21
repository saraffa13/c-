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
    ll maxLen=0;
   string s,t,res="";
   cin>>s>>t;
   if(s.length()>t.length())
   {
       string temp=s;
       s=t;
       t=temp;
   }
   for(ll i=0;i<s.length();i++)
   {
    //    string req="";
       ll count=0;
       for(ll j=0;j<t.length();j++)
       {
           if(t[j]==s[i])
           {
               count++;
               i++;
           }
           else{
               if(count>maxLen)
               {
                   maxLen=count;
               }
                count=0;
                // req="";
           }
       }
   }

}

int main()
{
    IOS;
    // ll t=1;
    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
