// #include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>

// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


#ifdef LOCAL
	#define eprintf(...) fprintf(stderr, __VA_ARGS__);fflush(stderr);
#else
	#define eprintf(...) 42
#endif


using namespace std;

// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
#define MAX 1e5 + 1;


// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


void init(ll arr[], ll n)
{
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
}

// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



void solve()
{
  string s,t;
  cin>>s>>t;
  ll i=s.length()-1,j=t.length()-1;
  while(j>=0&&i>=0)
  {
      if(s[i]==t[j]){
          i--;
          j--;
      }
      else{
           i-=2;
      }
  }
  if(j==-1)
  {
      cout<<"YES"<<endl;
      return;
  }
  cout<<"NO"<<endl;
  return;
  

}



// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


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



// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

