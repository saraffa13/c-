#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
	int n,a,b;
	cin >> n >> a >> b;
	int ans=1;
	while(ans<=n){
		if((n-ans)%b==0){
			cout << "YES\n";
			return;
		}
		ans*=a;
		if(a==1)
			break;
	}
	cout << "No\n";
}
int32_t main(){
	int t;
	cin >> t;
	while(t--) solve();
}