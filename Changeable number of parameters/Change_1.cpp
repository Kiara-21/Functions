#include <iostream>
#include <stdarg.h>

using namespace std;

double Sum(int n, ...)
{
	va_list it;
	va_start(it, n);
	double s = 0;
	double buf;
	for (int l = 0; l < n; l++)
	{
		double buf = va_arg(it, double);
		s = s + buf;
	}
	va_end(it);
	return s;
}

int main()
{
	double a, b, c, d, e, f, g, h;
	
	cout << "Load: " << endl;
	
	cin >> a >> b >> c >> d >> e >> f >> g >> h;
	cout << endl;
	
	cout << "Sum 3 = " << Sum(3, a, b, c, d, e, f, g, h) << endl;
	cout << "Sum 5 = " << Sum(5, a, b, c, d, e, f, g, h) << endl;
	cout << "Sum 8 = " << Sum(8, a, b, c, d, e, f, g, h) << endl;
}