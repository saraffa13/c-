#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
bool isUpper(char c)
{
    return (c >= 65 && c <= 90);
}
bool isLower(char c)
{
    return (c >= 97 && c <= 122);
}
ll lcm(ll a, ll b)
{
    if (a > b)
        swap(a, b);
    for (ll i = 1;; i++)
    {
        if (b * i % a == 0)
            return b * i;
    }
}
string rectify(string s)
{
    string a="()";
    while(s.length()>0){
        if(s.find(a)!=string::npos){
            s.erase(s.find(a),2);
        }
        else{
            return s;
        }
    }
    return s;
}
void solve()
{
    ll n,count=0;
    cin >> n;
    string s;
    cin >> s;
    string a = rectify(s);
    if(a.length()==0)
    {
        cout<<0<<endl;
        return;
    }
    for(ll i=0;i<a.length();i++){
        if(a[i]=='(')
            count++;
    }
    cout<<count<<endl;
    
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
