#include <bits/stdc++.h>
using namespace std;

bool check_small_char(char c, string s)
{
	bool  is_small_char = false;
	int len_str = s.size();

	for (int i = 0; i < len_str; i++)
	{
		if (s[i] == c)
			is_small_char = true;
	}
	return (is_small_char);
}

int main()
{
	string s;
	cin >> s;

	int count = 0;
	for (char c = 'a'; c <= 'z'; c++)
	{
		if (check_small_char(c, s))
			count++;
	}
	cout << count << endl;
	return 0;
}