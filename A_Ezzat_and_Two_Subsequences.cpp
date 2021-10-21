#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <iomanip>

// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


#ifdef LOCAL
	#define eprintf(...) fprintf(stderr, __VA_ARGS__);fflush(stderr);
#else
	#define eprintf(...) 42
#endif


using namespace std;

// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
#define MAX 1e5 + 1;


// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


// void init(ll arr[], ll n)
// {
//     for (ll i = 0; i < n; i++)
//         cin >> arr[i];
// }

// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//double  -  lf
// long long int - lld
// int - d
// float - f
// long double - LF


void solve()
{
    cout << fixed << setprecision(10);
    int n;
		cin >> n;
		ld v[n];
		for (int i = 0; i < n; i++)
			cin >> v[i];
		ld mx = v[0];
		ld sum = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] > mx)
				mx = v[i];
			sum += v[i];
		}
		cout << 1.0 * (sum - mx) / (n - 1) + mx << endl;

}


// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


int main()
{
    IOS;
    // ll t=1;
    long long t;
    cin>>t;
    while (t--)
        solve();

    return 0;
}



// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

