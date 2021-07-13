#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double

inline ll in(){
    ll x;
    cin>>x;
    return x;
}

void solve(){
    ll n=in(),noOfEven=0,noOfOdd=0,k=0;
    ll arr[n];
    if(n%2==1)
    {
        cout<<"NO"<<endl;
        return ;
    }
    for(ll i=0;i<n;i++){
        arr[i]=in();
    }
    for(ll i=0;i<n;i++){
        if(arr[i]%2==0)     noOfEven++;
        else    noOfOdd++;
    }
    if(noOfEven%2==0&&noOfOdd%2==0){
        cout<<"YES"<<endl;
        return;
    }else{
        sort(arr,arr+n);
        for(ll i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]==1)
                k++;
        }
        cout<<(k==0?"NO":"YES")<<endl;
    }



}

int main(){
    ll t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
