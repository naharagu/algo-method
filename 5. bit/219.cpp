#include <bits/stdc++.h>
using namespace std;

int main()
{
	int	n;
	cin >> n;

	vector<int> result(9);
	for (int k = 0; k < 9; k++)
		result[k] = 0;

	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		for (int k = 0; k < 9; k++)
		{
			if (a[i] == k + 1)
				result[k]++;
		}
	}
	int index = 0;
	for (int k = 0; k < 9; k++)
	{
		if (result[k] > result[index])
			index = k;
	}
	index++;
	cout << index << endl;
	return 0;
}