#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

void solve(){
    ll n,index=0,res=0;
    cin>>n;
    if(n==1)
    {
        cout<<"Sheldon"<<endl;
        return;
    }
    for(ll i=1;i<n;i++){
        if(5*(pow(2,i)-1)>n){
            index=i;
        	break;
        }
    }
    
    index--;
    ll a=pow(2,index);
    ll x=n-5*(a-1);
    if(x%a==0)
    {
        res=x/a-1;

    }
    else    
        res=x/a;
    if(res==0){
        cout<<"Sheldon"<<endl;
    }
    else if(res==1){
        cout<<"Leonard"<<endl;
    }
    else if(res==2){
        cout<<"Penny"<<endl;
    }
    else if(res==3){
        cout<<"Rajesh"<<endl;
    }
    else{
        cout<<"Howard"<<endl;
    }
}

int main(){
    ll t=1;
    // cin>>t;
    while(t--)
        solve();

    return 0;
}
