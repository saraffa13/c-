#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double

void init(ll arr[], ll n)
{
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
}

bool symmetric(pair<ll,ll>p,pair<ll,ll>q)
{
    return (p.second==q.first);

}
void solve()
{
    string s;
    cin>>s;
    bool check=false;
    while(true)
    {
        
        if((s.find("01")==string::npos&&s.find("10")==string::npos)||s.length()==0)
        {
            if(check==true)
            {
                cout<<"DA"<<endl;

            }
            else{
                cout<<"NET"<<endl;
            }
            return;
        }
        else{
            check=!check;
            if(s.find("01")!=string::npos)
            {
                s.erase(s.find("01"),2);
            }
            else if(s.find("10")!=string::npos)
            {
                s.erase(s.find("10"),2);
            }
        }
        
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
