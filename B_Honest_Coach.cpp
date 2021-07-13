#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double

void solve(){
    ll n,res=INT_MAX;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(ll i=0;i<n-1;i++){
        res=min(res,abs(arr[i]-arr[i+1]));
        if(res==0){
            cout<<0<<endl;
            return;
        }
    }
    cout<<res<<endl;
    return;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
