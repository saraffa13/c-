#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
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
    string s, t, a,b;
    cin>>s>>t;
    for(int i=0;i<t.length();i++)
    {
        a = t.substr(i,t.length()-i);
        if(isPallin(a,a.length())){
            b=a.substr(0,ceil(1.0*a.length()/2));
            if(s.find(b)!=string::npos)
            {
                cout<<"YES"<<endl;
                return;
            }
        }
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
