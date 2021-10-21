#include<bits/stdc++.h>
// ============================================================================================================================================================================#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
// ============================================================================================================================================================================
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define min4(a,b,c,d) min(a,min(b,min(c,d)))
#define min3(a, b, c) min(a, min(b, c))
#define min5(a,b,c,d,e) min(a,min(b,min(c,min(d,e))))
// ============================================================================================================================================================================
const int N  = 1e5 +1;
// ============================================================================================================================================================================
ll in()
{
    ll x;cin>>x;return x;
}
int In()
{
    int x;cin>>x;return x;
}
// ============================================================================================================================================================================
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    for (ll i = 2; i < n; i++)
        if (n % i == 0)
            return false;  
    return true;
}
// ============================================================================================================================================================================
const ll MAX_CHAR1 = 26;
const ll MAX_FACT1 = 20;
ll fact1[MAX_FACT1];
void precomputeFactorials(){
   fact1[0] = 1;
   for (ll i = 1; i < MAX_FACT1; i++)
      fact1[i] = fact1[i - 1] * i;
}
// Shows function for nth permutation
void nPermute(string str1, ll n1){
   precomputeFactorials();
   // Indicates length of given string
   ll len1 = str1.length();
   // Used to count frequencies of all
   // characters
   ll freq1[MAX_CHAR1] = { 0 };
   for (ll i = 0; i < len1; i++)
      freq1[str1[i] - 'a']++;
      // Shows out1 string for output string
      char out1[MAX_CHAR1];
      //Used to iterate till sum equals n1
      ll sum1 = 0;
      ll k1 = 0;
      // We umodify both n1 and sum1 in this
      // loop.
      while (sum1 != n1) {
         sum1 = 0;
         // Verify for characters present in freq1[]
         for (ll i = 0; i < MAX_CHAR1; i++) {
            if (freq1[i] == 0)
               continue;
            // Remove character
            freq1[i]--;
            // Compute sum1 after fixing
            // a particuar char
            ll xsum1 = fact1[len1 - 1 - k1];
            for (ll j = 0; j < MAX_CHAR1; j++)
               xsum1 /= fact1[freq1[j]];
               sum1 += xsum1;
            // Now if sum1 > n1 fix that char as
            // present char and modify sum1
            // and required nth after fixing
            // char at that position
            if (sum1 >= n1) {
               out1[k1++] = i + 'a';
               n1 -= (sum1 - xsum1);
               break;
            }
            // Now if sum1 < n1, add character back
            if (sum1 < n1)
               freq1[i]++;
         }
      }
      // Now if sum1 == n1 means this
      // char will provide its
      // greatest permutation
      // as nth permutation
      for (ll i = MAX_CHAR1 - 1;
         k1 < len1 && i >= 0; i--)
      if (freq1[i]) {
         out1[k1++] = i + 'a';
      freq1[i++]--;
   }
   // Used to append string termination
   // character and prll result
   out1[k1] = '\0';
   cout << out1;
}
// Driver p
// ============================================================================================================================================================================

void solve()
{
  ll n,k;
  cin>>n>>k;
  string s =string(n-2,'a');
  s=s+"bb";
  nPermute(s,k);
  string t =s.substr(n,n);
  cout<<t<<endl;
}

// ============================================================================================================================================================================


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

// ============================================================================================================================================================================