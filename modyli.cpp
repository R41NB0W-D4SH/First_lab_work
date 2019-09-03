#include <iostream>
using namespace std;
int main()
{
    float a,b,c,d,e,f;
    cout << "Enter the nubmers: ";
    cin >> a >> b;
    if (a > 0)
    {
        a = a;
    }
    else 
    a = a * (-1);
    
    if (b > 0)
    {
        b = b;
    }
    else 
    b = b * (-1);
    
    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    cout << "Sum is "<< c <<endl;
    cout << "Residual is "<< d <<endl;
    cout << "Multiplication is "<< e <<endl;
    cout << "Quotient is "<< f <<endl;
	return 0;
}