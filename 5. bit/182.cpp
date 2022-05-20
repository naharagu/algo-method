#include <bits/stdc++.h>
using namespace std;

int main()
{
	int	a, n;
	cin >> a >> n;

	int ans = a ^ (1 << n);
	cout << ans << endl;
	return 0;
}