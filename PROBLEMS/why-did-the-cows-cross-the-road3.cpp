#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int N;

int main() {
    freopen("cowqueue.in", "r", stdin);
    freopen("cowqueue.out", "w", stdout);
    
    cin >> N;
    vector<pair<int, int>> cows;
    for (int i = 0; i < N; i++) {
        cin >> cows[i].first >> cows[i].second;
    }

    int curTime = 0;
    for (int i = 0; i < N; i++) {
        if (curTime > cows[i].first) {
            curTime += cows[i].first;
        } else {
            curTime = cows[i].first + cows[i].second;
        }
    }
    cout << curTime << "\n";
}