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
    string a="qwertyuiop",b="asdfghjkl;",c="zxcvbnm,./";
    char ch;
    cin>>ch;
    string s,res="";
    cin>>s;
    // cout<<s<<endl;
    if(ch=='R')
    {
        for(ll i=0;i<s.length();i++)
        {
            char r=s[i];
            if(a.find(r)!=string::npos){
                res=res+a[a.find(r)-1];
            }
            else if(b.find(r)!=string::npos){
                res=res+b[b.find(r)-1];
            }
            else if(c.find(r)!=string::npos){
                res=res+c[c.find(r)-1];
            }
        }
    }
    else{
        for(ll i=0;i<s.length();i++)
        {
            char r=s[i];
            if(a.find(r)!=string::npos){
                res=res+a[a.find(r)+1];
            }
            else if(b.find(r)!=string::npos){
                res=res+b[b.find(r)+1];
            }
            else if(c.find(r)!=string::npos){
                res=res+c[c.find(r)+1];
            }
        }
    }
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
