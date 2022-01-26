#include <bits/stdc++.h>
using namespace std;

#define MAX_N 100
int N = 0;
vector<pair<int, int>> coordinates (MAX_N);

void input(int N) {
    for (int i = 0; i < N; i++) {
        cin >> coordinates[i].first >> coordinates[i].second;
    }
}

void file_input(string c) {
    freopen(c + ".in", "r", stdin);
    freopen(c + ".out", "w", stdout);
}

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void parallel(float a1, float b1,
              float c1, float a2,
              float b2, float c2)
{
    // If slopes are equal
    if ((-(a1 / b1)) == (-(a2 / b2))) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}

void solve() {
    cin >> N;
    input(N);
    
}

int main() {
    fast_io();
}
