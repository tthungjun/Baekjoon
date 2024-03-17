#include <iostream>
#include <vector>
using namespace std;

void merge_sort(int s, int e);
static vector<int> v;
static vector<int> temp;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    v = vector<int>(n + 1, 0);
    temp = vector<int>(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    merge_sort(1, n);

    for (int i = 1; i <= n; i++) {
        cout << v[i] << '\n';
    }

    return 0;
}

void merge_sort(int s, int e) {
    if (s < e) {
        int m = s + (e - s) / 2;
        merge_sort(s, m);
        merge_sort(m + 1, e);

        int i = s;
        int j = m + 1;
        int k = s;

        while (i <= m && j <= e) {
            if (v[i] <= v[j]) {
                temp[k++] = v[i++];
            } else {
                temp[k++] = v[j++];
            }
        }

        while (i <= m) {
            temp[k++] = v[i++];
        }

        while (j <= e) {
            temp[k++] = v[j++];
        }

        for (int idx = s; idx <= e; idx++) {
            v[idx] = temp[idx];
        }
    }
}
