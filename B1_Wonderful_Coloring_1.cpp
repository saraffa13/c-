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
    string s;
    cin>>s;
    if(s.length()==1)
    {
        cout<<0<<endl;
        return;
    }
    unordered_map<char,ll>S;
    for(ll i=0 ; i<s.length();i++)
    {
        S[s[i]]++;
    }
    ll count=0,count1=0;
    for(auto x:S)
    {
        if(x.second>1){
            count++;
        }
        else{
            count1++;
        }
    }

    cout<<count1/2+count<<endl;
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
