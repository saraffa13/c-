#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

    
#define int long long
#define ld long double
#define endl '\n'
#define MOD 1000000007
const int mod=1e9+7;

#define I =in()
#define S =sin()
#define C =chin()

#define rep(i,a,b)      for(int i=a;i<b;i++)
#define fill(arr)        for(auto &x:arr) x I;
#define Fill            for(int i =0;i<n;i++){cin>>arr[i].first>>arr[i].second;}
#define vi              vector<int>
#define vii             vector<pair<int,int>>
#define A               arr(n)
#define  B              brr(n)

inline int in(){int x;cin >> x;return x;}inline string sin(){string x;cin >> x;return x;}inline char chin(){char x;cin >> x;return x;}inline int In(){int x;cin >> x;return x;}
// =======================================================================================================
// int gcd(int a, int b){if (a == 0)return b;return gcd(b % a, a);}
// int factorial(int n ){return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;}
// bool isPrime(int n){if (n <= 1)return false;for (int i = 2; i < n; i++)if (n % i == 0)return false;return true;}
// bool isPalin(string s){string t = s;reverse(s.begin(),s.end());return s==t;}
// bool isPowOfTwo(int n){int y = log2(n);return (pow(2, y) == n);}
// bool isPerfectSq(double n){double y = sqrt(n);return abs(y * y - n) < -1000000007;}
// bool arraySortedOrNot(int arr[], int n){if (n == 0 || n == 1)return true;for (int i = 1; i < n; i++)if (arr[i - 1] > arr[i])return false;return true;}
// void pullSubset(string s, int l , int r,string &a,string &b){b = s.substr(0,l);a = s.substr(l,r-l);b=b+ s.substr(r,s.size()-r);}
// =======================================================================================================
int n,sum=0,sum2=0,m=INT_MAX;
vector<int>subset;
void solver ( int k ){
    if(k == n){
        sum2 = accumulate(subset.begin(),subset.end(),0LL);
        int x = sum -sum2 ;
        m = min(m,abs(x-sum2));
    }
    else{
        solver(k+1);
        subset.push_back(k);
        solver(k+1);
        subset.pop_back();
    }
}
void solve()
{
    int n I,x I, p I;
    int sum = 3*x + (x-n);
    if(sum<p){
        cout<<"FAIL"<<endl;
    }
    else{
        cout<<"PASS"<<endl;
    }
}

signed main(){
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

