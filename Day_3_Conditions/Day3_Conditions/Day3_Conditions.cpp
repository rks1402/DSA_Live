#include<iostream>
using namespace std;

int main()
{
	int num;

	cout << "Enter the value of num" << endl;

	//input
	//cin >> num;


	//if statement
	/*if (num > 0) {
		cout << "Number is positive" << endl;
	}*/

	//if-else statement
	/*if (num == 5) {
		cout << "number is 5" << endl;
	}
	else {
		cout << "number is not 5" << endl;
	}*/

	//if-elseif statement
	/*if (num == 1) {
		cout << "num is 1" << endl;
	}
	else if (num == 2) {
		cout << "num is 2" << endl;
	}
	else if(num == 3) {
		cout << "num is 3" << endl;
	}
	else {
		cout << "number nahi mila" << endl;
	}*/

	//Switch
	/*switch (num) {
	case 0: cout << "this is zero case";
			break;
	case 7: cout << "this is second case";
			break;
	default: cout << "this is default case";

	}*/


	//Loops

	int n;
	int a = 1;
	int sum = 0;
	cin >> n;

	/*while (a <= n) {
		cout << "Rahul" << endl;
		a = a + 1;
	}*/

	while (a <= n) {
		sum = sum + a;
		a = a + 1;
	}

	cout << sum << endl;

	return 0;
}