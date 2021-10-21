#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string t=s;
    ll count=0;
    sort(s.begin(),s.end());
    for(ll i=0;i<s.length();i++)
    {
        if(s[i]!=t[i])
            count++;
    }
    cout<<count<<endl;
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
