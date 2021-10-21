#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
#define MAX 1e5 + 1;

void init(ll arr[], ll n)
{
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
}

void solver(vector<ll>&a, vector<ll> &b) {
   ll n = a.size();
   unordered_map<ll, ll> my_map;
   set<ll> my_set;
   for (ll i = 0; i < n; i++) {
      my_map[b[i]]++;
      my_set.insert(b[i]);
   }
   vector<ll> sequence;
   for (ll i = 0; i < n; i++) {
      if (a[i] == 0) {
         auto it = my_set.lower_bound(0);
         ll value = *it;
         sequence.push_back(value % n);
         my_map[value]--;
         if (!my_map[value])
            my_set.erase(value);
         }
         else {
            ll x = n - a[i];
            auto it = my_set.lower_bound(x);
            if (it == my_set.end())
               it = my_set.lower_bound(0);
            ll value = *it;
            sequence.push_back((a[i] + value) % n);
            my_map[value]--;
            if (!my_map[value])
               my_set.erase(value);
         }
      }
   for(ll x:sequence)
   {
       cout<<x<<" ";
   }
}

void solve()
{
    ll n;
    cin>>n;
    vector<ll>arr;
    vector<ll>brr;
    // ll arr[n];
    // ll brr[n];
    // init(arr,n);
    // init(brr,n);
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        arr.push_back(x);
        // arr.push_back(x);
    }
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        brr.push_back(x);
        // arr.push_back(x);
    }
    solver(arr,brr);
    
    
}

int main()
{
    IOS;
    // ll t=1;
    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
