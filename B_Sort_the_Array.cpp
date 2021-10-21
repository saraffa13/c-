#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
// #define end \n
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
// ==============================================================================================================================
// bool isPerfectSq(ll n)
// {
//     ll s = sqrt(n);

//     return (s * s == n);
// }
bool isPowOfTwo(ll n)
{
    ll y=log2(8);
	return (pow(2,y)==8);
}
// ===============================================================================================================================
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define min3(a, b, c) min(a, min(b, c))
#define min5(a, b, c, d, e) min(a, min(b, min(c, min(d, e))))
// ===============================================================================================================================
// const  N = e5 + '1';
// ===============================================================================================================================
ll in()
{
    ll x;
    cin >> x;
    return x;
}
string sin()
{
    string x;
    cin >> x;
    return x;
}
char chin()
{
    char x;
    cin >> x;
    return x;
}
// int In()
// {
//     int x;
//     cin >> x;
//     return x;
// }
// ================================================================================================================================

// ================================================================================================================================
// bool isPrime(ll n)
// {
//     if (n <= '1')
//         return false;
//     if (n <= 3)
//         return true;
//     if (n % '2' == 0 || n % 3 == 0)
//         return false;
//     for (int i = 5; i * i <= n; i = i + 6)
//         if (n % i == 0 || n % (i + '2') == 0)
//             return false;
//     return true;
// }
// =================================================================================================================================
// void init(ll arr[], ll n)
// {
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
// }
// void Init(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
// }
// ================================================================================================================================
// ll solver(ll n,ll a,ll b,ll c){

// }
// ================================================================================================================================
bool arraySortedOrNot(ll arr[], ll n)
{
    // Array has one or no element
    if (n == 0 || n == 1)
        return true;
 
    for (ll i = 1; i < n; i++)
 
        // Unsorted pair found
        if (arr[i - 1] < arr[i])
            return false;
 
    // No unsorted pair found
    return true;
}
bool arraySortedOrNot2(ll arr[], ll n)
{
    // Array has one or no element
    if (n == 0 || n == 1)
        return true;
 
    for (ll i = 1; i < n; i++)
 
        // Unsorted pair found
        if (arr[i - 1] > arr[i])
            return false;
 
    // No unsorted pair found
    return true;
}
void rvereseArray(ll arr[], ll start, ll end)
{
    while (start < end)
    {
        ll temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}  
// ================================================================================================================================
void solve()
{
    ll n=in();
    ll arr[n];
    for(auto &x:arr) x=in();
    if(arraySortedOrNot2(arr,n)){
        cout<<"yes"<<endl<<"1"<<" "<<"1"<<endl;
        return;
    }
    if(arraySortedOrNot(arr,n)){
        cout<<"yes"<<endl<<"1"<<" "<<n<<endl;
        return;
    }
    ll a=-1,b=-1;
    for(ll i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1]){
            a=i;
            for(ll j=i+1;j<n-1;j++)
            {aa
                if(arr[j]<arr[j+1]){
                    b=j;
                    break;
                }
            }
            break;
        }
    }
    if(b==-1)
    b=n-1;
    reverse(arr+a,arr+b+1);
    // rvereseArray(arr,a,b);
    // cout<<a<<" "<<endl;
    // for(auto x:arr)
    // cout<<x<<" ";
    if(arraySortedOrNot2(arr,n)){
        cout<<"yes"<<endl;
        cout<<a+1<<" "<<b+1<<endl;
        return;
    }
    cout<<"no"<<endl;



}
// ===================================================================================================================================

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

// =====================================================================================================================================