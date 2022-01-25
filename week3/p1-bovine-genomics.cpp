#include <bits/stdc++.h>
using namespace std;

int n = 0;
vector<string> spotty (100);
vector<string> plain (100);
int ans = 0;
int m = 0;

bool solve(int m1) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (spotty[i][m1] == plain[j][m1]) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("cownomics.in", "r", stdin);
	freopen("cownomics.out", "w", stdout);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> spotty[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> plain[i];
	}

	for (int i = 0; i < m; i++) {
		if (solve(i)) ans++;
	}

	cout << ans << endl;
}
