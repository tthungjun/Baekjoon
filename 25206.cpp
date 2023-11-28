#include <iostream>
#include <vector>
#include <string>
using namespace std;

double trans(string grade) {
	if (grade == "A+") {
		return 4.5;
	}
	else if (grade == "A0") {
		return 4.0;
	}
	else if (grade == "B+") {
		return 3.5;
	}
	else if (grade == "B0") {
		return 3.0;
	}
	else if (grade == "C+") {
		return 2.5;
	}
	else if (grade == "C0") {
		return 2.0;
	}
	else if (grade == "D+") {
		return 1.5;
	}
	else if (grade == "D0") {
		return 1.0;
	}
	else if (grade == "F") {
		return 0.0;
	}
}

int main() {
	vector<string> subject(20);
	vector<double> score(20);
	vector<string> grade(20);
	double sum = 0.0;
	double sum2 = 0.0;
	double average = 0.0;

	for (int i = 0; i < 20; i++) {
		cin >> subject[i] >> score[i] >> grade[i];
	}
	
	for (int i = 0; i < 20; i++) {
		if (grade[i] == "P") {
			continue;
		}
		else {
			double trans_grade = trans(grade[i]);
			sum += (trans_grade) * (score[i]);
			sum2 += score[i];
		}
	}

	average = sum / sum2;

	cout << average;

	return 0;
}