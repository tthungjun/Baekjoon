#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n;
    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cin >> m;
    vector<int> num(m);
    for (int i = 0; i < m; i++) {
        cin >> num[i];
    }

    // A �迭�� unordered_set�� ����
    // 1,2,3,4,4�� �Է��ϸ� unordered_set���� 1,2,3,4�� ����
    unordered_set<int> numSet(A.begin(), A.end());

    vector<bool> tf(m);
    for (int i = 0; i < m; i++) {
        // numSet���� ���Ҹ� ã�Ƽ� ����� ����
        tf[i] = (numSet.find(num[i]) != numSet.end());
    }

    for (int i = 0; i < m; i++) {
        cout << tf[i] << endl;
    }

    return 0;
}
