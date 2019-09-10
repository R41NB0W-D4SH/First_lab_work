#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float a, b, c, d, e, f;

	cout << "Enter the nubmers: ";
	cin >> a >> b;

	c = pow(a,2) + pow(b,2);
	d = pow(a, 2) - pow(b, 2);
	e = pow(a, 2) * pow(b, 2);
	f = pow(a, 2) / pow(b, 2);

	cout << "Sum is " << c << endl;
	cout << "Residual is " << d << endl;
	cout << "Multiplication is " << e << endl;
	cout << "Quotient is " << f << endl;

	system("pause");
	return 0;
}
