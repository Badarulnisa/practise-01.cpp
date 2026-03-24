/*Add two 2x2 matrices :

A = 1 2    B = 5 6    C = 6  8
3 4        7 8        10 12*/

#include<iostream>
using namespace std;
int main()
{
	int matrixA[2][2] = { { 1, 2 }, { 3, 4 } };
	int matrixB[2][2] = { { 5, 6 }, { 7, 8 } };
	cout << "Matrix A: " << endl;
	cout << "--------" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << matrixA[i][j] << " ";
		}

		cout << endl;

	}
	cout << "\nMatrix B: " << endl;
	cout << "--------" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << matrixB[i][j] << " ";
		}

		cout << endl;

	}
	cout << "\nMatrix C: " << endl;
	cout << "--------" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << matrixA[i][j] + matrixB[i][j] << " "; //addition of matrices
		}
		cout << endl;
	}
}