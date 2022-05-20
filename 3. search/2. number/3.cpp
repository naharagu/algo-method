#include <bits/stdc++.h>
using namespace std;

int main()
{
	int	n;
	cin >> n;

	bool flag = true;
	if (n == 1)
		flag = false;
	else
	{
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0)
				flag = false;
		}
	}
	if (flag)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}