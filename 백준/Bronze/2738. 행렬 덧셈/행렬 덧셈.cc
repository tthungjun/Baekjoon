#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int** array = new int* [n];
	for (int i = 0; i < n; i++)
	{
		array[i] = new int[m];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> array[i][j];
		}
	}

	int** array2 = new int* [n];
	for (int i = 0; i < n; i++)
	{
		array2[i] = new int[m];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> array2[i][j];
		}
	}

	int** sum = new int* [n];
	for (int i = 0; i < n; i++)
	{
		sum[i] = new int[m];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum[i][j] = array[i][j] + array2[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << sum[i][j] << ' ';
		}
		cout << '\n';
	}

	for (int i = 0; i < n; i++) {
		delete[] array[i];
	}
	delete[] array;

	for (int i = 0; i < n; i++) {
		delete[] array2[i];
	}
	delete[] array2;

	for (int i = 0; i < n; i++) {
		delete[] sum[i];
	}
	delete[] sum;

	return 0;
}