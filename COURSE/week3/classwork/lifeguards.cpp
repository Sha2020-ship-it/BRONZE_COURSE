#include <bits/stdc++.h>
using namespace std;

const int max_n = 100;
int n = 0;
vector<int> start (max_n);
vector<int> end_vector (max_n);

int main() {
        // freopen("lifeguards.in", "r", stdin);
        // freopen("lifeguards.out", "w", stdout);

        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> start[i] >> end_vector[i];
        }

        int time_frame[1000] = { 0 };
        for (int i = 0; i < n; i++) {
            for (int k = start[i]; k < end_vector[i]; k++) {
                time_frame[k]++;
            }
        }

        int maxCovered = 0;
        for (int i = 0; i < n; i++) {
            for (int k = start[i]; k < end_vector[i]; k++) {
                time_frame[k]--;
            }

            int covered = 0;
            for (int k = 0; k < 1000; k++) {
                if (time_frame[k] > 0) covered++;
            }

            maxCovered = max(maxCovered, covered);
            for (int k = start[i]; k < end_vector[i]; k++) {
                time_frame[k]++;
            }
        }
        cout << maxCovered << endl;
}
