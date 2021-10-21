#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
bool isPallindrome(string s)
{
    string a = s;
    reverse(s.begin(), s.end());
    return s == a;
}
void solve()
{
    ll n;
    cin >> n;
    if(n==1){
        cout<<'a'<<endl;
        return;
    }
    // string s;
    // cin >> s;
    // ll n=s.length();
    ll k= n /2;
    for(ll i=0;i<k;i++)   
    {
        cout<<'a';
    }
    cout<<(n%2==0?"b":"bc");
    for(ll i=0;i<k-1;i++)   
    {
        cout<<'a';
    }
    cout<<endl;
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
