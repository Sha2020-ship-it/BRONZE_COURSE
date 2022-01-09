#include <bits/stdc++.h>
using namespace std;

int a1, a2, b1, b2, c1, c2, d1, d2;

int main() {
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2 >> d1 >> d2;

    int x_dist = max(b1, d1) - min(a1, c1);
    int y_dist = max(b2, d2) - min(a2, c2);
    int max_dist = max(x_dist, y_dist);
    cout << max_dist * max_dist << endl;   
}