#include <iostream>
#include <string>

using namespace std;

//Task Name : Sum of numbers from 0 to N
/* Task Description:
We want to generate a function that computes the series starting from 0 and ending until the given number.

Examples:
 Input:
> 6
Output:
0+1+2+3+4+5+6 = 21

Input:
> -15
Output:
-15<0

Input:
> 0
Output:
0=0

Task Link: https://www.codewars.com/kata/56e9e4f516bcaa8d4f001763
*/
class SequenceSum {
	int count;
public:
	SequenceSum(int);
	string showSequence();

};

std::string SequenceSum::showSequence()
{
	int tSum = 0;
	string tFinalString;

	if (count == 0)
		return "0=0";
	if (count < 0)
		return tFinalString.append(to_string(count) + "<0");

	for (int i = 0; i <= count; i++)
	{
		// Calculate Sum
		tSum += i;

		// Appending elements to the Final String
		tFinalString.append(to_string(i));

		if (i != count)
			tFinalString.append("+");
		else
		{
			tFinalString.append(" = ");
			tFinalString.append(to_string(tSum));
		}	
	}
	return tFinalString;
}


SequenceSum::SequenceSum(int c) {
	count = c;
}

int main()
{
	string  a =  SequenceSum(0).showSequence();

	cin.get();
	return 0;
}