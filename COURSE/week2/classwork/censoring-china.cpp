    #include <bits/stdc++.h>
    using namespace std;

    void setIn(string s)  { freopen(s.c_str(),"r",stdin); }
    void setOut(string s) { freopen(s.c_str(),"w",stdout); }
    void setIO(string s = "") {
        cin.tie(0)->sync_with_stdio(0); // unsync C / C++ I/O streams
        // cin.exceptions(cin.failbit);
        // throws exception when do smth illegal
        // ex. try to read letter into int
        if(s.size()) setIn(s+".in"), setOut(s+".out"); // for old USACO
    }

    void solve() {
        string s, t;
        cin >> s >> t;

        string ans = "";
        for(int i = 0; i < s.size(); i++) {
            ans += s[i];
            if (ans.size() >=    t.size() && ans.substr(ans.size() - t.size(), t.size()) == t) {
                ans.resize(ans.size() - t.size());
            }
        }

        cout << ans << endl;
    }

    int main() {
        setIO("censor");
        solve();
    }
