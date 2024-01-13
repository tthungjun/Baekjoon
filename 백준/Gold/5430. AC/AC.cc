#include <iostream>
#include <deque>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int _case;
	cin >> _case;

	vector<string> ans;
	for (int i = 0; i < _case; i++) {
		string func;
		cin >> func;

		int size;
		cin >> size;

		string arr;
		cin >> arr;

		deque<string> num;
		stringstream sstream(arr.substr(1, arr.size() - 2));
		string a;

		while (getline(sstream, a, ',')) {
			num.push_back(a);
		}

        int count = 0;
        int frontIdx = 0, backIdx = num.size();

        for (int j = 0; j < func.size(); j++) {
            if (func[j] == 'R') {
                swap(frontIdx, backIdx);
            }
            else if (func[j] == 'D') {
                if (frontIdx == backIdx) {
                    cout << "error" << '\n';
                    count++;
                    break;
                }
                else {
                    if (frontIdx < backIdx) {
                        frontIdx++;
                    }
                    else {
                        frontIdx--;
                    }
                }
            }
        }

        if (count == 1) {
            continue;
        }

        if (!num.empty()) {
            if (frontIdx <= backIdx) {
                cout << "[";
                for (int i = frontIdx; i < backIdx - 1; i++) {
                    cout << num[i] << ",";
                }
                if (frontIdx < backIdx) {
                    cout << num[backIdx - 1] << "]\n";
                }
                else {
                    cout << "]\n";
                }
            }
            else if (frontIdx > backIdx) {
                cout << "[";
                for (int i = frontIdx - 1; i >= backIdx + 1; i--) {
                    cout << num[i] << ",";
                }
                cout << num[backIdx] << "]\n";
            }
        }
        else {
            cout << "[]\n";
        }
    }

	return 0;
}