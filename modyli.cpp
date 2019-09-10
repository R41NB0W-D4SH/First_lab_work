#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float a, b, c, d, e, f;
	cout << "Enter the nubmers: ";
	cin >> a >> b;

	a = fabs(a);
	b = fabs(b);
	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;

	cout << "Sum is " << c << endl;
	cout << "Residual is " << d << endl;
	cout << "Multiplication is " << e << endl;
	cout << "Quotient is " << f << endl;

	system("pause");
	return 0;
}
