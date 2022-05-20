#include <bits/stdc++.h>
using namespace std;

int main()
{
	int	n;
	cin >> n;

	vector<string> s(n);
	int c_left = 0;
	int c_right = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
		if (s[i] == "left")
			c_left++;
		else
			c_right++;
	}
	if (c_left > c_right)
		cout << "left" << endl;
	else if (c_left < c_right)
		cout << "right" << endl;
	else
		cout << "same" << endl;
	return 0;
}