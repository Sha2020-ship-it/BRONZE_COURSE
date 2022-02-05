#include <bits/stdc++.h>
using namespace std;

int main() {
    int p, n; set<int> s; cin >> n;
    for (int i = 0; i < n; i++) { cin >> p; s.insert(p); }
    cout << s.size() << "\n";
}