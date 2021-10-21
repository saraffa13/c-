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
    ll n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    if(b>=0){
        cout<<s.length()*(a+b)<<endl;
        return;
    }
    ll counto=0,count1=0;
    for(ll i=0;i<s.length();i++)
    {
        if(s[i]=='0')
            counto++;
        else {   
            count1++;
            
        }
    }
    ll j=0,res=0,res1=0;
    // if(counto==count1){
    //     cout<<s.length()*(a+b)<<endl;
    //     return;
    // }
    // if(counto<count1){
        for(ll i=0;i<s.length();i++)
        {
            if(s[i]=='0')
                j++;
            else
            {
                if(j>0){
                    res1=res1+(a*j)+b;
                }
                    j=0;
            }
        }
        if(j>0){
            res1=res1+(a*j)+b;
        }
        res1=res1+(count1*a)+b;
        // cout<<res<<endl;
        // return;
    // }
    j=0;
    for(ll i=0;i<s.length();i++)
        {
            if(s[i]=='1')
                j++;
            else
            {
                if(j>0){
                    res=res+(a*j)+b;                    
                }
                j=0;
            }
        }
        if(j>0){
            res=res+(a*j)+b;
        }
        res=res+(counto*a)+b;
        // cout<<res<<endl;
        // return;
        res=max(res,res1);
        cout<<res<<endl;

    
    
    
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
