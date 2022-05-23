#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> a(10);
	a = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

	int q;
	cin >> q;

	vector<int> index(q);
	vector<int> k(q);
	vector<int> v(q);

	for (int i = 0; i < q; i++)
	{
		cin >> index[i];
		if (index[i] == 0)
		{
			cin >> k[i];
			cout << a[k[i]] << endl;
		}
		else
		{
			cin >> k[i];
			cin >> v[i];
			a[k[i]] = v[i];
		}
	}
	return 0;
}