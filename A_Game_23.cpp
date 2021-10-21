#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double


void solve()
{
        ll n,m,k=0;
        cin>>n>>m;
        if(n==m){
            cout<<0<<endl;
            return;
        }
        if(m%n!=0){
            cout<<-1<<endl;
            return;
        }
        m=m/n;
        while(m>1){
            if(m%3==0){
                m=m/3;
                k++;
            }
            else if(m%2==0){
                m=m/2;
                k++;
            }
            else{
                break;
            }
        }
        if(m==1){
            cout<<k<<endl;
            return;
        }
        cout<<-1<<endl;
        
}

int main()
{
    ll t=1 ;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}
