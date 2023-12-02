#include <iostream>
#include <iomanip>
#include <functional>
using namespace std;

function<double(double)> derivative(function<double(double)> f, double h) {
	return [f, h](double x) {return (f(x + h) - f(x)) / h; };
}

double fun(double x) {
	return 3 * x * x + 5;
}

double ans(double x) {
	return 6 * x;
}

int main() {
	// [](int x, int y) -> int {return x * y; };
	// == [](int x, int y) {return x * y; };

	// <functional> library는 함수를 반환하게 하기 때문에 아무리 void 타입이어도 return 해주어야 함.

	double h = 0.0000001;
	auto der = derivative(fun, h);

	double x = 5.0;
	cout << "---------------------------------------------\n";
	cout << "                          Approx.  Actual \n";
	cout << "   x       f(x)      h     f\'(x)    f\'(x)\n";
	cout << "---------------------------------------------\n";

	while (x < 5.1) {
		cout << fixed << showpoint << setprecision(5);
		cout << x << " " << fun(x) << " " << h << " " << der(x) << " " << ans(x) << '\n' ;
		x += 0.01;

	}

	return 0;
}