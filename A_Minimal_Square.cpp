#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double

void solve(){
    ll a,b;
    cin>>a>>b;
    ll chhota=min(a,b);
    ll bada=max(a,b);
    if(bada==chhota)
    {
        cout<<(2*bada)*(2*bada)<<endl;
        return;
    }
    if(1.0*bada/2>chhota){
        cout<<(bada)*(bada)<<endl;

    }
    else
        cout<<4*chhota*chhota<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
