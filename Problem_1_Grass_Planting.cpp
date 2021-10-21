#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 10000;

// USACO-style file input
void setIO(string name = ""){ // FastIO see General -> Fast Input and Output
	ios_base::sync_with_stdio(0); cin.tie(0);
	if(name.size()){
		freopen((name+".in").c_str(), "r", stdin);
		freopen((name+".out").c_str(), "w", stdout);
	}
}

int main() {
	setIO("planting");

	int n; 
	cin >> n;
	int deg[MAX_N + 1] = {}; // initialize with 0s
	int u, v;
	int maxDeg = INT_MIN;  // tracking maxDegree
	for (int i = 1; i < n; i++) {
		cin >> u >> v;
		deg[u]++;
		deg[v]++;
		maxDeg = max(maxDeg, max(deg[u], deg[v]));
	}
	cout << maxDeg + 1 << "\n";
}