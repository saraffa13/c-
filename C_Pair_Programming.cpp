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
  ll k,n,m;
  cin>>k>>n>>m;
  ll arr[n],brr[m];
  for(ll i=0;i<n;i++)
    cin>>arr[i];
  for(ll i=0;i<m;i++)
    cin>>brr[i];
 vector<ll>v(k,-1),res;
 ll i=0,j=0;
 while(i<n&&j<m)
 {
     if(arr[i]==0)
     {
         v.push_back(-1);
         res.push_back(0);
         i++;
     }
     if(brr[j]==0)
     {
          v.push_back(-1);
         res.push_back(0);
         j++;
     }
     if(i<n&&j<m&&arr[i]>v.size()&&brr[j]>v.size())
     {
         cout<<-1<<endl;
         return;
     }
     if(i<n&&arr[i]<=v.size())
     {
         res.push_back(arr[i]);
         i++;
     }
     else if(j<m&&brr[j]<=v.size())
     {
         res.push_back(brr[j]);
         j++;
     }
 }
 if(i<n)
 {
     if(arr[i]==0)
     {
         v.push_back(-1);
         res.push_back(0);
         i++;
     }
     if(i<n&&arr[i]<=v.size())
     {
         res.push_back(arr[i]);
         i++;
     }
     else {
         cout<<-1<<endl;
         return;
     }
 }
 if(j<m)
 {
     if(brr[j]==0)
     {
         v.push_back(-1);
         res.push_back(0);
         j++;
     }
     if(j<m&&brr[j]<=v.size())
     {
         res.push_back(brr[j]);
         j++;
     }
     else {
         cout<<-1<<endl;
         return;
     }
 }
 for(ll i:res)
 {
     cout<<i<<" ";
 }
 cout<<endl;

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
