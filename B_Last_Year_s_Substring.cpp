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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string a="",b="",c="",f="",e="";
     a=a+s[0]+s[1]+s[2]+s[3];
     b=b+s[0]+s[1]+s[2]+s[n-1];
     c=c+s[0]+s[1]+s[n-2]+s[n-1];
     f=f+s[0]+s[n-3]+s[n-2]+s[n-1];
     e=e+s[n-4]+s[n-3]+s[n-2]+s[n-1];
    string d="2020";
    // cout<<s<<" "<<b<<" "<<c<<endl;

    if(a==d||b==d||c==d||d==e||f==d)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
    
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
