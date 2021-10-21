#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
void solve()
{
    ll n,k=0,l=0;
    cin>>n;
    char arr[n][n];
    ll brr[2];
    ll crr[2];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='*')
            {
                brr[k++]=i;
                crr[l++]=j;
            }

        }
    }
    if(brr[0]!=brr[1]&&crr[0]!=crr[1])
    {
        arr[brr[0]][crr[1]]='*';
        arr[brr[1]][crr[0]]='*';
    }
    else if(brr[1]==brr[0])
    {
        if(brr[1]==n-1)
        {
            arr[brr[1]-1][crr[0]]='*';
            arr[brr[1]-1][crr[1]]='*';
        }
        else{
            arr[brr[1]+1][crr[0]]='*';
            arr[brr[1]+1][crr[1]]='*';
        }
    }
    else if(crr[1]==crr[0])
    {
        if(crr[1]==n-1)
        {
            arr[brr[0]][crr[1]-1]='*';
            arr[brr[1]][crr[1]-1]='*';
        }
        else{
            arr[brr[0]][crr[1]+1]='*';
            arr[brr[1]][crr[1]+1]='*';
        }
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }


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
