#include<iostream>
using namespace std;

int main() {
	//int n = 4;

	////Question 1
	////for rows
	//for (int row = 1; row <= n; row++) {

	//	//for each row, print n stars or we have n col
	//	for (int col = 1; col <= n; col++) {
	//		cout << "* ";
	//	}
	//	cout << endl;
	//}

	//Question 2
	//Half Pyramid

	/*int n = 5;

	for (int row = 1; row <= n; row++) {

		for (int col = 1; col <= row; col++) {
			cout << "* ";
		}
		cout << endl;
	}*/


	//Question 3
	//Reverse Half Triangle

	/*int n = 4;

	for (int row = 1; row <= n; row++) {

		for (int col = 1; col <= (n - row + 1); col++) {
			cout << "* ";

		}
		cout << endl;
	}*/


	//Question 4
	//Mirror Triangle

	//int n = 4;

	//for (int row = 1; row <= n; row++) {

	//	//spaces
	//	for (int col = 1; col <= n - row; col++) {

	//		cout << "  ";
	//	}

	//	//stars
	//	for (int col = 1; col <= row; col++) {

	//		cout << "* ";
	//	}
	//	cout << endl;
	//}

	//Question 5
	//Reverse Mirror Pyramid

	/*int n = 4;

	for (int row = 1; row <= n; row++) {

		for (int col = 1; col <= row - 1; col++) {

			cout << "  ";
		}

		for (int col = 1; col <= n - row + 1; col++) {

			cout << "* ";
		}
		cout << endl;
	}*/


	//Question 6
	//Full Pyramid

	/*int n = 4;

	for (int row = 1; row <= n; row++) {

		for (int col = 1; col <= n-row; col++) {

			cout << " ";
		}

		for (int col = 1; col <= row; col++) {
			
			cout << " *";
		}

		cout << endl;
	}*/

	//Question 7
	//Solid Diamond

		/*int n = 5;

		for (int row = 1; row <= n; row++) {

			for (int col = 1; col <= n - row; col++) {

				cout << " ";
			}

			for (int col = 1; col <= row; col++) {

				cout << " *";
			}

			cout << endl;
		}
		for (int row = 1; row <= n; row++) {

			for (int col = 1; col <= row - 1; col++) {

				cout << " ";
			}

			for (int col = 1; col <=n - row + 1; col++) {

				cout << " *";
			}

			cout << endl;
		}*/


	//Question 8
	//Inverted Full Pyramid

	/*int n = 4;

	for (int row = 1; row <= n; row++) {

		for (int col = 1; col <= row - 1; col++) {

			cout << " ";
		}

		for (int col = 1; col <= n - row + 1; col++) {

			cout << "* ";
		}

		cout << endl;
	}*/


	//Question 9
	//Hollow Inverted Right Angeled Triangle

	/*int n = 7;

	for (int row = 1; row <= n; row++) {

		if (row == 1 || row == n) {

			for (int col = 1; col <= n - row + 1; col++) {
			
				cout << "* ";
			}

			cout << endl;
		}
		else {
			cout << "* ";
			for (int col = 1; col <= n - row - 1; col++) {

				cout << "  ";
			}
			cout << "* ";
			cout << endl;
		}
	}*/
}