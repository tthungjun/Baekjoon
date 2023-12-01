#include <iostream>
#include <cstdlib>
using namespace std;

class SimpleRational {
	int numerator;
	int denominator;
public:
	SimpleRational(int n, int m) : numerator(n), denominator(m) {
		if (m == 0) {
			cout << "Zero denominater error\n";
			exit(1);
		}
	};
	SimpleRational() : numerator(0), denominator(1) {};

	void set_numerator(int n) {
		numerator = n;
	}

	void set_denominator(int m) {
		if (m != 0) {
			denominator = m;
		}
		else {
			cout << "Zero denominater error\n";
			exit(1);
		}
	}

	int get_numerator() {
		return numerator;
	}

	int get_denominator() {
		return denominator;
	}
};

SimpleRational multiply(SimpleRational f1, SimpleRational f2) {
	return {
		f1.get_numerator() * f2.get_numerator(), f1.get_denominator() * f2.get_denominator()
	};
}

void print_fraction(SimpleRational f) {
	std::cout << f.get_numerator() << "/" << f.get_denominator();
}

// 같은 비율인지 판단
bool ratio(SimpleRational f1, SimpleRational f2) {
	return (f1.get_numerator() * f2.get_denominator() == f1.get_denominator() * f2.get_numerator());
}

// 기존에는 i, j가 계속 재초기화되는 문제 발생
int gcd(int a, int b)
{
	int r = 0;

	if (a < b)
	{
		return gcd(b, a);
	}
	else if (a % b == 0)
	{
		return b;
	}
	else if (true)
	{
		int q = 1;
		r = a - b * q;
		return gcd(b, r);
	}
}

int main() {

	SimpleRational fract(1, 2);
	cout << "The fraction is";
	print_fraction(fract);
	cout << '\n';
	fract.set_numerator(19);
	fract.set_denominator(4);
	cout << "The fraction now is ";
	print_fraction(fract);
	cout << '\n';

	SimpleRational fract3(38, 8);

	if (ratio(fract, fract3)) {
		cout << "there are same" << endl;
	}
	else {
		cout << "nonono" << endl;
	}

	SimpleRational fract1{ 5, 9 }, fract2{ 3, 4 };
	auto prod = multiply(fract1, fract2);
	int gcd2 = gcd(prod.get_denominator(), prod.get_numerator());
	cout << "The product of ";
	print_fraction(fract1);
	cout << " and ";
	print_fraction(fract2);
	cout << " is ";
	SimpleRational bunsu(prod.get_numerator() / gcd2, prod.get_denominator() / gcd2);
	print_fraction(bunsu);
	cout << '\n';

	return 0;
}
