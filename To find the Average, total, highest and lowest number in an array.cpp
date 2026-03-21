/*Write a program with array `{77, 22, 32, 67, 83, 99, 76, 56, 88, 12}` that prints:
Total Marks : 612
Average Marks : 61.2
Highest Marks : 99
Lowest Marks : 12*/

#include<iostream>
using namespace std;
int main()
{
	int array[10] = { 77, 22, 32, 67, 83, 99, 76, 56, 88, 12 };
	int total = 0;
	int HighestMarks = array[0];
	int LowestMarks = array[0];
	float Average;
	for (int i = 0; i < 10; i++)
	{
		total += array[i];
		Average = total / 10.0; 
		/*even tho we took average in float it still printed in integer 
		thats because both 10 and total are in integers which cancelled the float,
		for to print float we will put .0 with the avergae mean, making sure it gives the answer in float!!*/
		if (array[i] > HighestMarks)
		{
			HighestMarks = array[i];
		}
		if (array[i] < LowestMarks)
		{
			LowestMarks = array[i];
		}
	}
	cout << "Total Marks: " << total << endl;
	cout << "Average Marks: " << Average << endl;
	cout << "Highest Marks: " << HighestMarks << endl;
	cout << "Lowest Marks: " << LowestMarks << endl;
}

