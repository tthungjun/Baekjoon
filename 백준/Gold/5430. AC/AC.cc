#include <iostream>
#include <deque>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

// 덱의 구조를 이용한 인덱스 이용

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

// 시간 초과 발생한 내 첫 코드

/*#include <iostream>
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
		for (int j = 0; j < func.size(); j++) {
			if (func[j] == 'R') {
				for (int k = num.size() - 2; k >= 0; k--) {
					string n = num[k];
					num.push_back(n);
				}
				for (int k = 0; k < num.size() - 1; k++) {
					num.pop_front();
				}
			}
			else if (func[j] == 'D') {
				if (num.empty()) {
					cout << "error" << '\n';
					count++;
					break;
				}
				else num.pop_front();
			}
		}

		if (count == 1) {
			continue;
		}

		if (!num.empty()) {
			cout << "[";
			for (int i = 0; i < num.size() - 1; i++) {
				cout << num[i] << ",";
			}
			cout << num[num.size() - 1] << "]\n";
		}
		else cout << "[]\n";
	}

	return 0;
}*/
