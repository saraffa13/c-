#include <bits/stdc++.h>
// =======================================================================================================
using namespace std;
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
#define ld long double
#define MOD 1000000007
#define I =in()
#define S =sin()
#define C =chin()

#define nc2 n*(n-1)/2
// =======================================================================================================
const int N = 1e5 + 1;
// =======================================================================================================
inline int in(){int x;cin >> x;return x;}inline string sin(){string x;cin >> x;return x;}inline char chin(){char x;cin >> x;return x;}inline int In(){int x;cin >> x;return x;}
// =======================================================================================================
// int gcd(int a, int b)
// {
//     if (a == 0)
//         return b;
//     return gcd(b % a, a);
// }
    int factorial(int n ){return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;}
// =======================================================================================================
// bool isPrime(int n)
// {
//     if (n <= 1)
//         return false;
//     for (int i = 2; i < n; i++)
//         if (n % i == 0)
//             return false;
//     return true;
// }
// bool isPaintin(string s)
// {
//     string t = s;
//     reverse(s.begin(),s.end());
//     return s==t;
// }
// bool isPowOfTwo(int n)
// {
//     int y = log2(n);
//     return (pow(2, y) == n);
// }
// bool isPerfectSq(double n)
// {
//     double y = sqrt(n);
//     return abs(y * y - n) < -1000000007;
// }
// =======================================================================================================
// bool arraySortedOrNot(int arr[], int n)
// {
//     // Array has one or no element
//     if (n == 0 || n == 1)
//         return true;

//     for (int i = 1; i < n; i++)

//         // Unsorted pair found
//         if (arr[i - 1] > arr[i])
//             return false;

//     // No unsorted pair found
//     return true;
// }
int n;
int arr[20];

// int rec(int i, int sum1, int sum2)
// {
   
// }
// =======================================================================================================

void solve()
{
  int n I, k I,l=0;
  vector<int>arr(k);
  for(auto &x:arr)x I;
  sort(arr.begin(),arr.end());
  int r =0;
  for( int i = k-1;i>=0&&arr[i]>r;i--){
      int diff = n - arr[i];
      r += diff;
      l++;
  }
  cout<<l<<endl;return;
}

// =======================================================================================================

signed main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

// =======================================================================================================