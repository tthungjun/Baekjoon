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

    // A 배열을 unordered_set에 저장
    // 1,2,3,4,4를 입력하면 unordered_set에는 1,2,3,4를 저장
    unordered_set<int> numSet(A.begin(), A.end());

    vector<bool> tf(m);
    for (int i = 0; i < m; i++) {
        // numSet에서 원소를 찾아서 결과를 저장
        tf[i] = (numSet.find(num[i]) != numSet.end());
    }

    for (int i = 0; i < m; i++) {
        cout << tf[i] << endl;
    }

    return 0;
}
