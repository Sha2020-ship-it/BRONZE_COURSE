#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int days = 0;
    string cow = 0;
    signed int diff;

    cin >> n;
    vector<tuple<int, string, int>> logs;

    for (int i = 0; i < n; i++) {
        cin >> days >> cow >> diff;
        logs.push_back(make_tuple(days, cow, diff));
    }

    sort(logs.begin(), logs.end());
    for (int i = 0; i < logs.size(); i++) {
        cout << 
    }
}
