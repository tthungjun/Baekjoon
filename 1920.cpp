#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n;
    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    sort(begin(A), end(A));

    cin >> m;
    vector<int> num(m);
    for (int i = 0; i < m; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < m; i++) {
        if (binary_search(begin(A), end(A), num[i])) {
            cout << "1" << '\n';
        }
        else {
            cout << "0" << '\n';
        }
    }

    return 0;
}