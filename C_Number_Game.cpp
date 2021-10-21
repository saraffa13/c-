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
#define  MOD 1000000007 

// =======================================================================================================
const int N  = 1e5 +1;
// =======================================================================================================
inline ll in()
{
    ll x;cin>>x;return x;
}
inline string sin()
{
    string x;cin>>x;return x;
}
inline char chin()
{
    char x;cin>>x;return x;
}
inline int In()
{
    int x;cin>>x;return x;
}
// =======================================================================================================

bool max(ll x,ll y,ll z=LONG_LONG_MIN, ll w=LONG_LONG_MIN){
    return max(x,max(y,max(z,w)));
}
bool min4(ll x,ll y,ll z=LONG_LONG_MAX, ll w=LONG_LONG_MAX){
    return min(x,min(y,min(z,w)));
}

// =======================================================================================================
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
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
// bool isPallin(string s)
// {    
//     string t = s;
//     reverse(s.begin(),s.end());
//     return s==t;
// }
bool isPowOfTwo(ll n)
{
    ll y = log2(n);
    return (pow(2, y) == n);
}
bool isPerfectSq(double n)
{
    double y = sqrt(n);
    return abs(y*y-n)<-1000000007;
}
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
unordered_map<ll,ll>m;
void primeFactors(ll n)
{
	// Print the number of 2s that divide n
	while (n % 2 == 0)
	{
		m[2]++;
		n = n/2;
	}

	// n must be odd at this point. So we can skip
	// one element (Note i = i +2)
	for (ll i = 3; i <= sqrt(n); i = i + 2)
	{
		// While i divides n, print i and divide n
		while (n % i == 0)
		{
			m[i]++;
			n = n/i;
		}
	}

	// This condition is to handle the case when n
	// is a prime number greater than 2
	if (n > 2)
		m[n]++;
}

// =======================================================================================================

void solve()
{
  ll n =in();
  if(n==1){
      cout<<"FastestFinger"<<endl;
      m.clear();
      return;
  }
  if(n==2){
      cout<<"Ashishgup"<<endl;
      m.clear();
      return;
  }
  if(n%2==1){
      cout<<"Ashishgup"<<endl;
      m.clear();
      return;
  }
  if(isPowOfTwo(n)){
      cout<<"FastestFinger"<<endl;
      m.clear();
      return;
  }
  ll c =0,d=0;
  primeFactors(n);
  for(auto x:m){
      
      if(x.first==2)
      {
          c=+x.second;
      }
      else{
          d+=x.second;
      }
  }
//   cout<<c<<" "<<d<<endl;
  if(c==1){
      if(d%2==1){
          
          m.clear();
          cout<<"FastestFinger"<<endl;
          return;
      }
      else {
          m.clear();
          cout<<"Ashishgup"<<endl;return;
      }
  }
  else{
      if(d%2==0){
          m.clear();
          cout<<"FastestFinger"<<endl;return;
      }
      else {
          m.clear();
          cout<<"Ashishgup"<<endl;return;
      }
  }
  
  
  
  


}

// =======================================================================================================


int main()
{
    IOS;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

// =======================================================================================================