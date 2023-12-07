#include <iostream>
#include <unordered_map>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string word;
    cin >> word;

    unordered_map<char, int> charCount;

    for (char ch : word)
    {
        if (islower(ch))
        {
            ch = toupper(ch);
        }
        charCount[ch]++;
    }

    char result = '?';
    int maxCount = 0;
    bool isDuplicate = false;

    for (const auto& entry : charCount)
    {
        // entry.first는 키이다. 즉, 여기서는 char 타입의 단어의 문자
        // entry.second는 값이다. 즉, 여기서는 char의 등장 횟수
        if (entry.second > maxCount)
        {
            maxCount = entry.second;
            result = entry.first;
            isDuplicate = false;
        }
        else if (entry.second == maxCount)
        {
            isDuplicate = true;
        }
    }

    if (isDuplicate)
    {
        cout << "?";
    }
    else
    {
        cout << result;
    }

    return 0;
}
