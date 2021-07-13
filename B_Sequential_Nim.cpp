#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double

void solve()
{
   bool check=true;
   ll n;
   cin>>n;
   ll arr[n];
   ll t5=0,f0=0,hn=0;
   for(ll i=0;i<n;i++){
       cin>>arr[i];
   }
   for(ll i=0;i<n;i++){
       if(arr[i]==25){
           t5++;
       }
       else if(arr[i]==50){
           if(t5>=1){
               t5--;
               f0++;
           }
           else{
               check=false;
           }


       }
       else if(arr[i]==100){           
           if(f0>=1&&t5>=1){
               f0--;
               t5--;
               hn++;
           }
           else if(t5>=3){
               t5-=3;
               hn++;
           }
           else{
               check=false;
           }
       }
   }
   if(check)
   {
       cout<<"Yes<"<<endl;
       return;
   }
   cout<<"No"<<endl;


}


int main()
{
    IOS;
    ll t =1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}
