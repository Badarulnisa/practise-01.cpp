#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	int i;
	int array[5] = { 10, 20, 30, 40, 50 };
	for (i = 0; i < 5; i++)
	{
	sum += array[i]; // sum
	}
	cout << "sum: " << sum << endl; // to display the sum we cout ooutside the bracket
	cout << "Average: " << sum/5;// average 1+2+3+4+5/5
}

