#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("speeding.in", "r", stdin);
    //freopen("speeding.out", "w", stdout);
    int N, M;
    cin >> N >> M;

    int RoadLengths[N], RoadLimits[N];
    int BessieLengths[M], BessieLimits[M];

    for (int i = 0; i < N; i++)
    {
        cin >> RoadLengths[i] >> RoadLimits[i];
    }

    for (int i = 0; i < M; i++)
    {
        cin >> BessieLengths[i] >> BessieLimits[i];
    }

    vector<int> Bessie;
    vector<int> Roads;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < RoadLengths[i]; j++)
        {
            Roads.push_back(RoadLimits[i]);
        }
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < BessieLengths[i]; j++)
        {
            Bessie.push_back(BessieLimits[i]);
        }
    }

    vector<int> diffs;
    for (int i = 0; i < 100; i++)
    {
        int diff = Bessie[i] - Roads[i];
        diffs.push_back(diff);
    }

    cout << max(*max_element(diffs.begin(), diffs.end()), 0) << endl;
}
