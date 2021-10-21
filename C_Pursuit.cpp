#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double


void solve()
{
    ll n,res=0,finalScore=0;
    cin>>n;
    ll arr[n],brr[n];
    for(ll i=0;i<n;i++){cin>>arr[i];}
    for(ll i=0;i<n;i++){cin>>brr[i];}
    sort(arr,arr+n,greater<int>());
    sort(brr,brr+n,greater<int>());
    ll a=n-n/4;
    ll sum1=0,sum2=0,score[n];
    for(ll i=0;i<a;i++)
    {
        sum1+=arr[i];
        sum2+=brr[i];
    }
    if(sum1>=sum2)
    {
        cout<<0<<endl;
        return;
    }
    for(ll i=1;i<n;i++){
        brr[i]=brr[i-1]+brr[i];
    }
    for(ll i=1;i<a;i++){
        arr[i]=arr[i-1]+arr[i];
    }
    for(ll i=a;i<n;i++){
        arr[i]=arr[i-1]+100;
    }
    for(ll i=a;i<n;i++){
        if(arr[i]>=brr[i]){
            cout<<i-a+1<<endl;
            return;
        }
    }
    finalScore=brr[n-1];
    for(ll i=1;;i++){
        if(sum1+(i+n-a)*100>=finalScore)
        {
            res=(i+n-a);
            break;
        }
    }
    cout<<res<<endl;




}

int main()
{
    ll t ;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
