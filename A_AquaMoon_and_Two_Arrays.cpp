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
    ll n,sum1=0,sum2=0,x;
    cin >> n;
    ll arr[n], brr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum1+=arr[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> brr[i];
        sum2+=brr[i];
    }
    if(sum1!=sum2)
    {
        cout<<-1<<endl;
        return;
    }
    vector<ll>va;
    vector<ll>vb;
    for(ll i=0;i<n;i++){
        if(arr[i]>brr[i]){
            x=abs(arr[i]-brr[i]);
            while(x--){
                va.push_back(i+1);
            }
        }
        else if(arr[i]>brr[i]){
            x=abs(arr[i]-brr[i]);
            while(x--){
                vb.push_back(i+1);
            }
        }
    }
    cout<<va.size()<<endl;
    for(ll i=0;i<va.size();i++){
        cout<<va[i]<<" "<<vb[i]<<endl;
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
