#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> v(n + 1);

    for (int i = 0; i <= n; i++) {
        if (i == 0) {
            v[i] = 0;
        }
        else if (i == 1) {
            v[i] = 1;
        }
        else {
            v[i] = v[i - 1] + v[i - 2];
        }
    }

    cout << v[n];

    return 0;
}