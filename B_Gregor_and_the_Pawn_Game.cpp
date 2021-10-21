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

void solve()
{
    ll n,count=0;
    cin>>n;
    string s,t;
    cin>>s>>t;
    vector<ll>v(n);




    for(ll i=0;i<n;i++)
    {
        if(t[i]=='1')
        {
            for(ll j=i-1;j<=i+1;j++)
            {
                if(j>=0&&j<n&&v[j]!=1)
                {
                        if((s[j]=='1'&&i!=j)or(s[j]=='0'&&i==j))
                        {
                            v[j]=1;
                            count++;
                            break;
                        }
                    }

            }
        }
    }




    
    cout<<count<<endl;
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
