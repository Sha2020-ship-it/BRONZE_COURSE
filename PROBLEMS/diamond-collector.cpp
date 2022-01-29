#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1000;
const int MAX_K = 10000;
int N;
int K;
vector<int> diamonds (MAX_N);
int largest = 0;
int curlargest = 0;


int main() {
    	freopen("diamond.in","r",stdin);
	freopen("diamond.out","w",stdout);
	int n,k;
	cin >> n >> k;
	vector<int> a;
	a.resize(n);
	for (int i=0;i<n;++i) {
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	int ans=0;
	for (int i=0;i<n;++i) {
		int cnt=1;
		for (int j=i+1;j<n;++j) {
			if (a[j]-a[i]<=k) ++cnt;
			else break;
		}
		ans=max(cnt,ans);
	}
	cout << ans;
	return 0;
}

int main2() {
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);
    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        cin >> diamonds[i];
    }

    sort(diamonds.begin(), diamonds.end());
    for (int i = 0; i < N; i++) {
        curlargest = 1;
        for (int j = i+1; j < N; j++) {
            if ((diamonds[j] - diamonds[i]) <= K) {
                // cout << "I: " << i << endl << "J: " << endl;
                curlargest++;
            }
            else break;
        }
        largest = max(largest, curlargest);
        //curlargest = 1;
    }
    cout << largest << endl;
}