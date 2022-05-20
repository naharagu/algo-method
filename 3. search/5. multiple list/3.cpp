#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> a(n);
	vector<int> b(m);
	vector<int> c(k);

	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++)
		cin >> b[i];
	for (int i = 0; i < k; i++)
		cin >> c[i];

	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			for (int l = 0; l < k; l++)
				if (a[i] + b[j] == c[l])
					count++;
		}
	}
	cout << count << endl;
	return 0;
}