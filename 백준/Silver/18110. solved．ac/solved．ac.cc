#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	int num = round(n * 0.15);
	float average = 0;

	if (n == 0) {
		cout << 0;
		return 0;
	}

	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	for (int i = num; i < n - num; i++) {
		average += arr[i];
	}

	average /= (n - (2 * num));

	cout << round(average);

	delete[] arr;

	return 0;
}