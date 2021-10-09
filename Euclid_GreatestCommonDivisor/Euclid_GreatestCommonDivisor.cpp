#include <iostream>
using namespace std;

int greatest_common_divisor(int a, int b);
int gcd_with_mod(int a, int b);

int main() {

	greatest_common_divisor(36, 24);
	cout << "-------------------" << endl;
	gcd_with_mod(36, 24);
	cout << "-------------------" << endl;

	greatest_common_divisor(100, 36);
	cout << "-------------------" << endl;
	gcd_with_mod(100, 36);
	cout << "-------------------" << endl;

}

int greatest_common_divisor(int a, int b) {
	cout << "a= " << a << " , b= " << b << endl;
	while (a > b)
	{
		a -= b;
	}
	if (a == b)
	{
		cout << "greatest common divisor= " << a << endl;
		return a;
	}
	cout << "a= " << a << " , b= " << b << endl;

	return greatest_common_divisor(b, a);

}
int gcd_with_mod(int a, int b) {
	cout << "a= " << a << " , b= " << b << endl;

	if (!b)
	{
		cout << "greatest common divisor= " << a << endl;
		return a;
	}
	a %= b;

	cout << "a= " << a << " , b= " << b << endl;
	return gcd_with_mod(b, a);
}
