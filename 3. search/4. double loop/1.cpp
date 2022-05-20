#include <bits/stdc++.h>
using namespace std;

bool check_prime(int n)
{
	bool is_prime = true;

	if (n <= 1)
		is_prime = false;
	else
	{
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0)
				is_prime = false;
		}
	}
	return (is_prime);
}

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (check_prime(a[i]))
			count++;
	}
	cout << count << endl;
	return 0;
}