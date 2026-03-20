/**#include<iostream>
using namespace std;
int main()
{
	int HighestArray;
	int array[6] = { 10, 20, 30, 40, 50, 60 };    { 10, 20, 60, 30, 40, 50, };
	for (int i = 0; i < 6; i++)
	{
		HighestArray = array[0]; //this (array)  ----------------------------------------------------(1)
		//you are supposed to initialize index with the varible you have assign to the values
		if (array[i] > HighestArray) {
			HighestArray = array[i];
		}
	}
	cout << "Highest number: " << HighestArray;
}**/
 

/*lets see whats wrong in this code, shall we? hehe, alright first, we saw earlier that it gave correct output,
and then we experimented with our code by putting a higher value in between and guess what,
it gave us a wrong higher value, which means our code was wrong, what we did to correct i?
well first of all, im numbering where i made mistakes, first and most important mistake i made was i initialized the highest array = index[0] inside the loop,
which even after iterations will give the same reset output(the last number of your array, so now lets look into it*/

#include<iostream>
using namespace std;
int main()
{
	int array[5] = { 10, 20, 30, 40, 50 };
	int HighestArray = array[0]; // we initialized it outside this time
	for (int i = 0; i < 5; i++)
	{
		if (array[i] > HighestArray) {
			HighestArray = array[i];
		}
	}
	cout << "Highest Array: " << HighestArray;
}