#include <iostream>

using namespace std;

struct ComplexNum
{
	double a;
	double b;
};

int functMinus(int, int);
ComplexNum functMinus(ComplexNum, ComplexNum);

int main()
{
	int m;
	int n;
	
	ComplexNum c1;
	ComplexNum c2;
	
	cout << "Hello" << endl;
	cout << "Load part of complex number 1" << endl;
	cout << "Load a1: ";
	cin >> c1.a;
	cout << "Load b1: ";
	cin >> c1.b;
	cout << "Load part of complex number 2" << endl;
	cout << "Load a2: ";
	cin >> c2.a;
	cout << "Load b2: ";
	cin >> c2.b;

	cout << "Load basic number" << endl;
	cout << "Load m: ";
	cin >> m;
	cout << "Load n: ";
	cin >> n;

	functMinus(m, n);
	functMinus(c1, c2);
	return 0;
}

int functMinus(int m, int n)
{
	cout << "m - n = " << m - n << endl;
};

ComplexNum functMinus(ComplexNum c1, ComplexNum c2)
{
	cout << "c3 = " << (c1.a - c2.a) << "+i" << (c1.b - c2.b) << endl;
}