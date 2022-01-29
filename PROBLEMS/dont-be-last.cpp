#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int>& a, pair<string, int>& b) {
    return a.second < b.second;
}

map<string, int> sort(map<string, int> M) {
    vector<pair<string, int> > A;
    for (auto& it : M) {
        A.push_back(it);
    }
    sort(A.begin(), A.end(), cmp);
    map<string, int> sorted;

    for (auto& it : A) {
        sorted[it.first] = it.second;
    }
    return sorted;
}

int main() {
    string names[7] = {"Bessie", "Elsie", "Daisy", "Gertie", "Annabelle", "Maggie", "Henrietta"};
    int N = 0;
    cin >> N;
    string s;
    int milk;
    map<string, int> cows;

    cows["Bessie"] = 0;
    cows["Elsie"] = 0;
    cows["Daisy"] = 0;
    cows["Gertie"] = 0;
    cows["Annabelle"] = 0;
    cows["Maggie"] = 0;
    cows["Henrietta"] = 0;

    for (int i = 0; i < N; i++) {
        cin >> s >> milk;
        cows[s] += milk;
    }
    cout << endl;
    for (int i = 0; i < 7; i++) {
        cout << names[i] << " Produced " << cows[names[i]] << endl;
    }

    cout << endl << "SORTED" << endl;
    map<string, int> sorted = sort(cows);
    for (auto &it : sorted) {
        cout << "Current Key: " << it.first << " Produced " << it.second << endl;
    }
}