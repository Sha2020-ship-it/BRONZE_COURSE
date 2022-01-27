// code from https://usaco.guide/problems/usaco-1061-stuck-in-a-rut/solution

#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<array<int, 3>> n_cows, e_cows;

	for (int i = 0; i < N; i++)
	{
		string dir;
		int x, y;
		cin >> dir >> x >> y;

		// we need to add i as well because we need to output them in order
		if (dir == "N")
		{
			n_cows.push_back({x, y, i});
		}
		else
		{
			e_cows.push_back({x, y, i});
		}
	}

	// sort north cows by x value
	sort(n_cows.begin(), n_cows.end());

	// sort east cows by y value
	sort(e_cows.begin(), e_cows.end(), [](auto &left, auto &right)
		 { return left[1] < right[1]; });

	/* 
	 * we sort them by x/y value because we know that, for a single cow, 
	 * it reaches a lower x/y value and then a higher one. 
	 * Thus, it is more we would not miss any earlier collisions
	 * if we iterate from lower to a higher value. 
	 */

	// stores the amount of grass it eats
	vector<int> stop(N);
	for (int i = 0; i < N; i++)
	{
		stop[i] = -1;
	}

	for (auto n_cow : n_cows)
	{
		for (auto e_cow : e_cows)
		{
			/*
			 * make sure that the north cow's x coord is less than the east cow's x coord,
      			 * and the north cow's y coord is less than an east cow's y coord.
			 */
			if (n_cow[0] > e_cow[0] && n_cow[1] < e_cow[1])
			{
				int n_dist = e_cow[1] - n_cow[1];
				int e_dist = n_cow[0] - e_cow[0];

				/*
				 * we need to check that the east cow is not stopped previously.
        			 * (Technically we need to check north cow too, but we don't need to 
        			 * because we break out of the loop once a north cow stops.)
				 */
				if (n_dist < e_dist && stop[e_cow[2]] == -1)
				{
					stop[e_cow[2]] = e_dist;
				}
				else if (e_dist < n_dist && stop[e_cow[2]] == -1)
				{
					/*
					 * once we know that this north cow stops, we can move on to the next one, 
          				 * i.e. skip all of the rest of east cows.
					 */
					stop[n_cow[2]] = n_dist;
					break;
				}
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		if (stop[i] == -1)
		{
			cout << "Infinity" << '\n';
		}
		else
		{
			cout << stop[i] << '\n';
		}

		// with ternary statement
		// cout << (stop[i] == -1 ? "Infinity" : stop[i]) << '\n';
	}
}