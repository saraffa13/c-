#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
#define MAX 1e5 + 1;
// #define MIN -e5;
bool isPallin(string s, int n){
    for(ll i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-1-i])
            return false;
    }
    return true;
}
void solve()
{
   ll n;
   cin>>n;
   string s;
   cin>>s;
   string a=s,b=s;
   if(s.find('?')==string::npos)
   {
       cout<<s<<endl;
       return;
   }
   if(a[0]=='?')
    a[0]='B';
   if(b[0]=='?')
    b[0]='R';
   ll count1=0,count2=0;
   for(ll i=1;i<s.length();i++)
   {       
       if(a[i]=='?')
       {
           if(a[i-1]=='B')
           a[i]='R';
            else    
           a[i]='B';
       }
   }
   for(ll i=1;i<s.length();i++)
   {       
       if(b[i]=='?')
       {
           if(b[i-1]=='B')
           b[i]='R';
            else    
           b[i]='B';
       }
   }
   for(ll i=1;i<s.length();i++)
   {
       if(a[i]==a[i-1])
        count1++;
       if(b[i]==b[i-1])
        count2++;
     
   }
   if(count2>count1)
    cout<<a<<endl;
   else 
   cout <<b<<endl;
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
