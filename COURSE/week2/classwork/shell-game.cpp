#include "bits/stdc++.h"
using namespace std;

int N;
int A[100];
int B[100];
int G[100];

int num_correct(int starting_shell) {
    int current = starting_shell, correct = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == current) current = B[i];
        else if (B[i] == current) current = A[i];

        if (current == G[i]) correct++;
    }
    return correct;
}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i] >> G[i];
    }

    int best = 0;
    for (int i = 1; i <= 3; i++) {
        best = max(best, num_correct(i));
    }

    cout << best << endl;
}
