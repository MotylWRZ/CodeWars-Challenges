#include <iostream>
#include <string>


//Task Name : Sum of Digits / Digital Root
/* Task Description: 
Digital root is the recursive sum of all the digits in a number.
Given n, take the sum of the digits of n. If that value has more than one digit, 
continue reducing in this way until a single-digit number is produced. 
This is only applicable to the natural numbers.

Examples:
 16  -->  1 + 6 = 7
   942  -->  9 + 4 + 2 = 15  -->  1 + 5 = 6
132189  -->  1 + 3 + 2 + 1 + 8 + 9 = 24  -->  2 + 4 = 6
493193  -->  4 + 9 + 3 + 1 + 9 + 3 = 29  -->  2 + 9 = 11  -->  1 + 1 = 2

Task Link: https://www.codewars.com/kata/541c8630095125aba6000c00/train/cpp
*/

int digital_root(int n)
{
	std::string tString = std::to_string(n); // Convert n to string
	int result = 10; // Set initial result to 10
	
	while (result > 9) // If result is greater than 9
	{
		result = 0; // Set result to 0
		if (tString.size() > 1) // If string size if greater than 1 (at least 2 characters)
		{
			for (int i = 0; i < tString.size(); i++)
			{
				// Add the current character (converted to int) to the result
				result += tString[i] - '0'; 
			}
			// Set the string to the result (converted to string)
			tString = std::to_string(result);
		}
	}
	return result;
}

int main()
{
	digital_root(16);
	system("PAUSE");
	return 0;
}