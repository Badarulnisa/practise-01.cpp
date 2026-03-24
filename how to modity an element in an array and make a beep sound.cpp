#include<iostream>
using namespace std;
int main()
{

	int matrix[3][3];
	cout << "Enter the Elements in the 3x3 matrix: " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> matrix[i][j]; // input matrix
		}
	}

	cout << "\nOriginal matrix: " << endl; // space sequence
	cout << "------------------" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	matrix[0][0] = 22;
	matrix[2][2] = 22; // for modification
	matrix[1][1] = 22;

	/*Always modify first then print, to actually modify a valua*/

	cout << "\nUpdated matrix: " << endl;
	cout << "------------------" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	cout << "\a"; //  to make a beep sound
}