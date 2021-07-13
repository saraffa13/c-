#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

void solve(){
    ll n,highest=0;
    cin>>n;
    unordered_map<ll ,ll>m;
    unordered_set<ll>s;

    for(ll i=0;i<n;i++)
    {
        ll x;cin>>x;
        m[x]++;
        highest=max(m[x],highest);
        s.insert(x);
    }
    ll size1=s.size()-1;
    ll size2=highest;
    if(size1>size2)
        cout<<size2<<endl;
    else if(size2-size1>=2)
        cout<<size1+1<<endl;
    else    
        cout<<size1<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
