#include <iostream>
using namespace std;
int main()
{
    float a,b,c,d,e,f;
    cout << "Enter the nubmers: ";
    cin >> a >> b;
    c = a*a + b*b;
    d = a*a - b*b;
    e = (a*a) * (b*b);
    f = (a*a) / (b*b);
    cout << "Sum is "<< c <<endl;
    cout << "Residual is "<< d <<endl;
    cout << "Multiplication is "<< e <<endl;
    cout << "Quotient is "<< f <<endl;
	return 0;
}