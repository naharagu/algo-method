#include <bits/stdc++.h>
using namespace std;

int count_divider(int n)
{
	int result = 0;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			result++;
	}
	return (result);
}

int main()
{
	int n, k;
	cin >> n >> k;

	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (count_divider(i) == k)
			count++;
	}
	cout << count << endl;
	return 0;
}