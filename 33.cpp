#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int	n, m;
	cin >> s >> n >> m;

	string tmp;
	tmp = s;

	tmp.at(n - 1) = s.at(m - 1);
	tmp.at(m - 1) = s.at(n - 1);

	cout << tmp << endl;
	return 0;
}