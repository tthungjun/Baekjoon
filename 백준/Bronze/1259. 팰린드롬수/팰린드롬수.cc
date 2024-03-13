#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;

    while (1) {
        int cnt = 0;

        cin >> a;

        if (a == 0) {
            break;
        }

        string str_a = to_string(a);

        if (str_a.length() == 1) {
            cout << "yes" << '\n';
            continue;
        }

        for (int i = 0; i < (str_a.size() / 2); i++) {
            if (str_a[i] == str_a[str_a.size() - i - 1]) {
                cnt++;
            }
        }

        if (cnt == (str_a.size() / 2)) {
            cout << "yes" << '\n';
        } else {
            cout << "no" << '\n';
        }
    }

    return 0;
}
