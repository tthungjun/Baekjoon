#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a == b && b == c)
	{
		cout << 10000 + 1000 * a << endl;
	}
	else if (a == b || b == c || c == a)
	{
		if (a == b)
		{
			cout << 1000 + 100 * a << endl;
		}
		else if(a == c)
		{
			cout << 1000 + 100 * a << endl;
		}
		else
		{
			cout << 1000 + 100 * b << endl;
		}
	}
	else
	{
		if (a > b && a > c)
		{
			cout << a * 100 << endl;
		}
		else if (b > a && b > c)
		{
			cout << b * 100 << endl;
		}
		else if (c > b && c > a)
		{
			cout << c * 100 << endl;
		}
	}
	return 0;
}