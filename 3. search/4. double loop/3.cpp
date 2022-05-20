#include <bits/stdc++.h>
using namespace std;

bool check_palindrome_num(int n)
{
	bool is_palindrome_num = true;
	string str_n = to_string(n);
	int len = str_n.size();

	for (int i = 0; i < len; i++)
	{
		if (str_n[i] != str_n[len - i - 1])
			is_palindrome_num = false;
	}
	return (is_palindrome_num);
}

int main()
{
	int l, r;
	cin >> l >> r;

	int count = 0;
	for (int i = l; i <= r; i++)
	{
		if (check_palindrome_num(i))
			count++;
	}
	cout << count << endl;
	return 0;
}