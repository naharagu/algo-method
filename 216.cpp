#include <bits/stdc++.h>
using namespace std;

int main()
{
	int	n, v;
	cin >> n >> v;

	vector<int> a(n);
	int count = -1;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] == v)
			count = i;
	}
	cout << count << endl;
	return 0;
}