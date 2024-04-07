#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int i, j;
	vector<int> a(n);

	for (int k = 0; k < n; k++)
	{
		a[k] = k + 1;
	}

	for (int k = 0; k < m; k++)
	{
		cin >> i >> j;
		int q = i + j - 2;

		for (int s = i - 1; s < j; s++)
		{
			if (s <= q - s)
			{
				int b = a [s];
				a[s] = a[q - s];
				a[q - s] = b;
			}
			else
			{
				break;
			}
		}
	}

	for (int k = 0; k < n; k++)
	{
		cout << a[k] << " ";
	}

	return 0;

}