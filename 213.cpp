#include <bits/stdc++.h>
using namespace std;

int main()
{
	int	n;
	cin >> n;

	vector<int> a(n);
	int max = -101;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] > max)
			max = a[i];
	}
	cout << max << endl;
	return 0;
}