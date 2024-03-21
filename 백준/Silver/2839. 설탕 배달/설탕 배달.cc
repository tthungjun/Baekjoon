#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int a = n / 5;
	int num = -1;

	for (int i = a; i >= 0; i--)
	{
		if ((n - 5 * i) % 3 == 0)
		{
			num = i + (n - 5 * i) / 3;
			break;
		}
	}

	cout << num;
}