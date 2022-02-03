#include <bits/stdc++.h>

using namespace std;

#define FastIO ios_base::sync_with_stdio(0); cin.tie(0)
#define len(x) (int)(x).length()

void setIO(string fileName = ""){
    FastIO;
    if(len(fileName)){
        freopen((fileName+".in").c_str(), "r", stdin);
        freopen((fileName+".out").c_str(), "w", stdout);
    }
}

struct Drinks {
    int t, p, m;
};

struct Sick {
    int p, t;
};

int main(){
    setIO("badmilk");
    int n, m, d, s; cin >> n >> m >> d >> s;
    vector<Drinks> drinks(d); vector<Sick> sick(s);
    vector<int> drank[n];
    for(int i=0; i<d; i++){
        cin >> drinks[i].p >> drinks[i].m >> drinks[i].t;
        drinks[i].p--; drinks[i].m--; drinks[i].t--;
    }
    for(int i=0; i<s; i++){
        cin >> sick[i].p >> sick[i].t;
        sick[i].p--; sick[i].t--;
    }
    for(int i=0; i<d; i++){
        for(int i=0; i<s; i++){
            if(drinks[i].p == sick[j].p && drinks[i].t < sick[j].t){
                drank[drinks[i].p].push_back(drinks[i].m);
            }
        }
    }
    vector<bool> sickMilk(m);
    for(int milk = 0; milk < m; milk++){
        sickMilk[milk] = true;
    }
    for(int milk = 0; milk < m; milk++){
        for(int person = 0; person < n; person++){
            if(sz(drank[person])){
                bool possible = false;
                for(int a: drank[person]){
                    if(a == milk){
                        possible = true;
                        break;
                    }
                }
                if(!possible){
                    sickMilk[milk] = false;
                }
            }
        }
    }
    vector<bool> isSick(n);
    for(int milk = 0; milk < m; milk++){
        for(int i=0; i<d; i++){
            if(sickMilk[milk] && drinks[i].m == milk){
                isSick[drinks[i].p] = true;
            }
        }
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        ans += isSick[i];
    }
    cout << ans << endl;
}