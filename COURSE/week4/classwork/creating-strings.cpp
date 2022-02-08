//
// Created by Asus on 2/6/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; vector<string> ans;
    cin >> s;
    sort(s.begin(), s.end());
    do { ans.push_back(s); } while (next_permutation(s.begin(), s.end()));
    cout << ans.size() << endl;
    for (unsigned int i = 0; i < ans.size(); i++) cout << ans[i] << endl;
}