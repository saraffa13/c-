#include<bits/stdc++.h>
// =======================================================================================================
using namespace std;
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
// =========================================
// =======================================================================================================
const int N  = 1e5 +1;
// =======================================================================================================
ll in()
{
    ll x;cin>>x;return x;
}
int In()
{
    int x;cin>>x;return x;
}
// =======================================================================================================
// bool isPrime(ll n)
// {
//     if (n <= 1)
//         return false;
//     for (ll i = 2; i < n; i++)
//         if (n % i == 0)
//             return false;  
//     return true;
// }
// =======================================================================================================
// bool arraySortedOrNot(ll arr[], ll n)
// {
//     // Array has one or no element
//     if (n == 0 || n == 1)
//         return true;
 
//     for (ll i = 1; i < n; i++)
 
//         // Unsorted pair found
//         if (arr[i - 1] > arr[i])
//             return false;
 
//     // No unsorted pair found
//     return true;
// }
// =======================================================================================================

void solve()
{
   ll n =in(),count=1,x=1;
   vector<ll>arr(n);
   for(auto &x:arr) x =in();
   sort(arr.begin(),arr.end());
   vector<pair<ll,ll>>v;
   for(ll i=0;i<n-1;i++){
       if(arr[i]==arr[i+1])
       {
           count++;

       }
       else{
           x++;
           v.push_back({arr[i],count});
           count=1;
       }
   }
   for(ll i=n-1;i>0;i--){
       if(arr[i]==arr[i-1])
       {
           count++;
       }
       else{
           v.push_back({arr[i],count});
           count=1;
           break;
       }
   }
   for(ll i=0;i<n;i++){
       cout<<v[i].first<<" "<<v[i].second<<endl;
   }



}

// =======================================================================================================


int main()
{
    IOS;
    ll t=1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

// =======================================================================================================