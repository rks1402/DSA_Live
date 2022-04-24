#include<iostream>
using namespace std;

int main()
{
	//cout << "Placement toh lagni hi hai";
	//return 0;

	int a = 5;
	cout << "Value of a is: " << a << endl;

	char c = 'd';
	cout << "Value of c is: " << c << endl;

	bool b = 0;
	cout << "Value of b is: " << b << endl;

	float f = 1.66;
	cout << "Value of f is: " << f << endl;

	double d = 5.66;
	cout << "Value of d is: " << d << endl;

	float val1 = 5.0;
	int val2 = 3;

	int ans = val1 / val2;

	cout << "ans is " << ans << endl;
	cout << "ans is " << (5.0/3) << endl;

	char character = 'a';
	int num = (int)character; //explicit type casting

	cout << "value of num is " << num << endl;

	return 0;

}