#include <iostream>

using namespace std;

int main()
{
	float a, b, s, p;
	cout << "Enter numbers: ";
	cin >> a >> b;

	s = a * b;
	p = (a + b) * 2;

	cout << "s = " << s << endl << "p = " << p << endl;

	system("pause");
	return 0;
}
