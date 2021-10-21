#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
bool isUpper(char c){
    return (c>=65&&c<=90);
}
bool isLower(char c){
    return (c>=97&&c<=122);
}
bool checkMistake(string s,int l){
    for(ll i=1;i<l;i++){
        if(isLower(s[i]))     return false;
    }
    return true;    
}

string rectify(string s,int l){
    if(isUpper(s[0]))
        s[0]=(char)(s[0]+32);
    else{
        s[0]=(char)(s[0]-32);
    }
    for(ll i=1;i<l;i++){
        s[i]=(char)(s[i]+32);
    }
    return s;

}
void solve()
{
    string s;
    cin>>s;
    if(!checkMistake(s,s.length()))
    {
        cout<<s<<endl;
        return;
    }
    string res = rectify(s,s.length());
    cout<<res<<endl;
    return;


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
