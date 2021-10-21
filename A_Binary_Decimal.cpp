#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double


void solve()
{
       ll n;
       cin>>n;
        ll count=0,highest=0;
        string s=to_string (n);
        for(ll i=0;i<n;i++){
            if(s[i]!='0'||s[i]!='1'){
                count++;
                if(highest<s[i]-48){
                    highest=s[i]-48;
                }                
            }
        }
        if(count==0){
            cout<<0<<endl;
            return;
        }
        cout<<highest<<endl;
        
}

int main()
{
    ll t ;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
