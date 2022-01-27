#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<string> spotty(100);
vector<string> plain(100);
int ans = 0;

bool solve(int m1) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
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

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> spotty[i];
	}

	for (int i = 0; i < M; i++) {
		cin >> plain[i];
	}

	for (int i = 0; i < m; i++) {
		if (solve(i)) ans++;
	}

	cout << ans << "\n";
}
