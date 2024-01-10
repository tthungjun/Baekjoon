#include <iostream>
#include <vector>
using namespace std;

/*void fibonacci(int n, int& count0, int& count1) {
    if (n == 0) {
        count0++;
        return;
    }
    else if (n == 1) {
        count1++;
        return;
    }
    else {
        fibonacci(n - 1, count0, count1);
        fibonacci(n - 2, count0, count1);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int num;
    cin >> num;

    vector<int> one;
    vector<int> zero;

    for (int i = 0; i < num; i++) {
        int n;
        cin >> n;
        int count1 = 0, count0 = 0;
        fibonacci(n, count0, count1);
        zero.push_back(count0);
        one.push_back(count1);
    }

    for (int i = 0; i < num; i++) {
        cout << zero[i] << " " << one[i] << '\n';
    }

	return 0;
}*/

int dp[41] = { 0, 1, 1 };

int main() {
    for (int i = 3; i < 41; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    int num;
    cin >> num;

    vector<int> one;
    vector<int> zero;

    for (int i = 0; i < num; i++) {
        int n;
        cin >> n;

        if (n == 0) {
            zero.push_back(1);
            one.push_back(0);
        }
        else if (n == 1) {
            zero.push_back(0);
            one.push_back(1);
        }
        else {
            zero.push_back(dp[n - 1]);
            one.push_back(dp[n]);
        }
    }

    for (int i = 0; i < num; i++) {
        cout << zero[i] << " " << one[i] << '\n';
    }
    
    return 0;
}