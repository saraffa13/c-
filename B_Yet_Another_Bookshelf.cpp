#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double

void init(ll arr[], ll n)
{
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
}


void solve()
{
    ll n,count=0,res=0;
    cin>>n;
    string s="";
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x==1)
            count++;
        s=s+to_string(x);
    }
    if(count==1||count==0)
    {
        cout<<0<<endl;
        return;
    }
    ll ind=s.find('1');
    s=s.erase(0,ind); 
    reverse(s.begin(),s.end());
    ll i=s.find('1');
    s=s.erase(0,i);
    // cout<<s<<endl;
    for(ll i=0;i<s.length();i++)
    {
        if(s[i]=='0'&&s[i+1]!=0){
            res++;
        }
    }
    cout<<res<<endl;

    


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
