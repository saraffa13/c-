#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
int count(string s){
    int count=0;
    for(ll i=0;i<s.length();i++)
    {
        if(s[i]=='1')
            count++;
    }
    return count;
}
void solve()
{
    string s;
    cin>>s;
    string a="",b="";
    ll c1=0,c2=0;
    for(ll i=0;i<10;i++)
    {
        if(i%2==0)
        {
            a=a+s[i];
            if(s[i]==1)
            {
                c1++;
            }
        }
        else{
            b=b+s[i];
            if(s[i]==1)
            {
                c2++;
            }
        }
    }
    if(c1>c2){
        for(ll i=0;i<5;i++){
            if(a[i]=='?'){
                a[i]='1';
            }
            if(b[i]=='?')
                b[i]='0';
        }
    }
    else if(c1<c2){
        for(ll i=0;i<5;i++){
            if(a[i]=='?'){
                a[i]='0';
            }
            if(b[i]=='?')
                b[i]='1';
        }
    }
    for(ll i=0;i<5;i++){
        if(count(a.substr(0,3))==3&&count(b.substr(0,3))==0)
        {
            cout<<7<<endl;
            return;
        }
        if(count(a.substr(0,3))==3&&count(b.substr(0,2))==0)
        {
            cout<<6<<endl;
            return;
        }
        if(count(a.substr(0,4))-count(b.substr(0,3))>1)
        {
            cout<<8<<endl;
            return;
        }
        if(count())
        
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
