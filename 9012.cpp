#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

// stack�� ������ �������� ���� �Ÿ� ���� ����, ���� �ε��� �ȵ�!!
// stack�� vector�� ���� ����!!

int main() {
    int case_num;
    cin >> case_num;

    vector<string> vps(case_num);
    vector<string> answer(case_num);

    for (int i = 0; i < case_num; i++) {
        cin >> vps[i];
    }

    for (int i = 0; i < case_num; i++) {
        stack<char> s;
        bool judge = true;

        for (char elem : vps[i]) {
            if (elem == '(') {
                s.push(elem);
            }
            else if (elem == ')') {
                if (!s.empty() && s.top() == '(') {
                    s.pop();
                }
                else {
                    judge = false;
                    break;
                }
            }
        }

        if (judge && s.empty()) {
            answer[i] = "YES";
        }
        else {
            answer[i] = "NO";
        }
    }

    for (int i = 0; i < case_num; i++) {
        cout << answer[i] << endl;
    }

    return 0;
}