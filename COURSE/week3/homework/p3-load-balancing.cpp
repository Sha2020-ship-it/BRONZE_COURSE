#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("balancing.in", "r", stdin);
	freopen("balancing.out", "w", stdout);
	int n, b;
	cin >> n >> b;
	vector<int> xval(n), yval(n);
	set<int> vfence, hfence;
	for (int i = 0; i < n; i++)
	{
		cin >> xval[i] >> yval[i];
		vfence.insert(xval[i] + 1); //x-coords of vertical fences
		hfence.insert(yval[i] + 1); //y-coords of horizontal fences
	}
	int maximum, answer = n;
	int topleft = 0, topright = 0, bottomleft = 0, bottomright = 0;
	//loop through each pair of fences
	for (auto h = hfence.begin(); h != hfence.end(); h++)
	{
		for (auto v = vfence.begin(); v != vfence.end(); v++)
		{
			maximum = 0;
			topleft = 0;
			topright = 0;
			bottomleft = 0;
			bottomright = 0;
			//count cows in each region
			for (int i = 0; i < n; i++)
			{
				if (xval[i] < *v && yval[i] < *h)
				{
					bottomleft++;
				}
				else if (xval[i] < *v && yval[i] > *h)
				{
					topleft++;
				}
				else if (xval[i] > *v && yval[i] < *h)
				{
					bottomright++;
				}
				else
				{
					topright++;
				}
			}
			maximum = max({bottomleft, topleft, bottomright, topright});
			answer = min(answer, maximum);
		}
	}
	cout << answer << endl;
	return 0;
}