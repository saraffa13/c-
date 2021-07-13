#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double
void solve()
{
    ll n;
    bool res=false;
    cin>>n;
    unordered_map<ll,vector<ll>>m;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(m.find(x)!=m.end()){
            if(m[x].size()>1){
                res=true;

            }
            else if(m[x].size()==1){
                if(i-m[x][0]>1){
                    res=true;
                    
                }
            }

        }
        m[x].push_back(i);
    }
    
    // bool res=false;
    if(res){
        cout<<"YES"<<endl;
    }
    else 
        cout<<"NO"<<endl;
    return;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
