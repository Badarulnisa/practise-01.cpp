//A transpose flips rows into columns : 

#include<iostream>
using namespace std;
int main()
{
	int matrix[3][3];
	cout << "Enter the Elements in the 3x3 matrix: " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> matrix[i][j];
		}
	}

	cout << "\nOriginal Matrix: " << endl;
	cout << "------------------" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	cout << "\nTranspose Matrix: " << endl;
	cout << "------------------" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[j][i] << " ";  // to transpose we just replace i and j with eachother
		}
		cout << endl;
	}
}