#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string word;
	cin >> word;

	string result;

	for (int i = 0; i < word.length(); i++)
	{
		char ch = word[i];

		if (ch >= 97 && ch < 123)
		{
			word[i] = ch - 32;
		}
	}

	for (char& ch : word)
	{
		if (islower(ch))
			ch = toupper(ch);
	}

	int num = count(word.begin(), word.end(), word[0]);
	result = word[0];

	for (int i = 0; i < word.length(); i++)
	{
		if (count(word.begin(), word.end(), word[i]) > num)
		{
			num = count(word.begin(), word.end(), word[i]);
			result = word[i];
		}
		else if (count(word.begin(), word.end(), word[i]) == num)
		{
			if (result == string(1, word[i]))
				continue;
			else
				result = "?";
		}
	}

	cout << result;

	return 0;
}