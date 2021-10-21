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
    ll n,k=0,l=0,x;
    cin>>n;
    n=2*n;
    vector<ll>arr,brr;
    for(ll i=0;i<n;i++){
            cin>>x;
            if(x%2==1){
                arr.push_back(i+1);
            }
            else{
                brr.push_back(i+1);
            }
    }
    if(arr.size()%2==1){
        arr.pop_back();
        k++;
    }
    if(k==0){
        brr.pop_back();
        brr.pop_back();
    }
    else{
        brr.pop_back();
    }
    for(ll i=0;i<arr.size()/2;i++)
    {
        cout<<arr[i++]<<" "<<arr[i]<<endl;
    }
    for(ll i=0;i<brr.size()/2;i++)
    {
        cout<<brr[i++]<<" "<<brr[i]<<endl;
    }  
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
