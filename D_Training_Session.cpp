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

#define nc2 n*(n-1)/2
// =======================================================================================================
const int N = 1e5 + 1;
// =======================================================================================================
inline int in()
{
    int x;
    cin >> x;
    return x;
}
inline string sin()
{
    string x;
    cin >> x;
    return x;
}
inline char chin()
{
    char x;
    cin >> x;
    return x;
}
inline int In()
{
    int x;
    cin >> x;
    return x;
}
// =======================================================================================================

bool max(int x, int y, int z = LONG_LONG_MIN, int w = LONG_LONG_MIN)
{
    return max(x, max(y, max(z, w)));
}
bool min4(int x, int y, int z = LONG_LONG_MAX, int w = LONG_LONG_MAX)
{
    return min(x, min(y, min(z, w)));
}

// =======================================================================================================
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
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
// bool isPallin(string s)
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
bool isPerfectSq(double n)
{
    double y = sqrt(n);
    return abs(y * y - n) < -1000000007;
}
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

// =======================================================================================================

void solve()
{
    int n =in (),c =0;
    vector<vector<int>>arr(n,vector<int>(2));
    for( int i =0 ;i<n;i++){
        for( int j=0;j<2;j++)cin>>arr[i][j];
    }
    
    for( int i=0;i<n;i++){
        for( int j=i+1;j<n;j++){
            for( int k =j+1;k<n;k++){
                if((arr[i][0]!=arr[j][0]&&arr[i][0]!=arr[k][0]&&arr[j][0]!=arr[k][0])||(arr[i][1]!=arr[k][1]&&arr[j][1]!=arr[k][1]&&arr[i][1]!=arr[j][1]))
                c++;
            }
        }

    }
    cout<<c<<endl;return;

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