#include <bits/stdc++.h>
using namespace std;

int main()
{
	int	n;
	cin >> n;

	vector<int> a(n);
	vector<int> nums(9);
	vector<int> result(9);
	for (int k = 1; k <= 9; k++)
		nums[k] = k;
	for (int k = 1; k <= 9; k++)
		result[k] = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		for (int k = 1; k <= 9; k++)
		{
			if (a[i] == nums[k])
				result[k]++;
		}
	}
	int count = 0;
	int max = 0;
	for (int k = 1; k <= 9; k++)
	{
		if (count < result[k])
			max = result[k];
	}
	cout << max << endl;
	return 0;
}