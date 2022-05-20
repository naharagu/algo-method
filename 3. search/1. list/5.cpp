#include <bits/stdc++.h>
using namespace std;

int main()
{
	int	n;
	cin >> n;

	vector<int> a(n);
	cin >> a[0];
	int count = 0;
	for (int i = 1; i < n; i++)
	{
		cin >> a[i];
		if (a[i] > a[i - 1])
			count++;
	}
	cout << count << endl;
	return 0;
}