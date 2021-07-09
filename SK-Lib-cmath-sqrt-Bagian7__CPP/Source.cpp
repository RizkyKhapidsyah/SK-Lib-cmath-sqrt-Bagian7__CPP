
#include <cmath>
#include <iomanip>
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	long long int x = 1000000000000000000;
	long long int y = 999999999999999999;

	cout << fixed << setprecision(5) << sqrtl(x) << endl;
	cout << fixed << setprecision(5) << sqrtl(y) << endl;

	_getch();
	return (0);
}
