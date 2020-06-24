#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
//Task Name: Mexican Wave
/*Task Description: In this simple Kata your task is to create a function that turns a string into a Mexican Wave. 
You will be passed a string and you must return that string in an array where 
an uppercase letter is a person standing up. 

Rules: 
1.  The input string will always be lower case but maybe empty.
2.  If the character in the string is whitespace then pass over it as if it was an empty seat.

Example: 
wave("hello") => []string{"Hello", "hEllo", "heLlo", "helLo", "hellO"}

Task Link: https://www.codewars.com/kata/58f5c63f1e26ecda7e000029
*/
std::vector<std::string> wave(std::string y)
{
	std::vector<std::string> tStrings; //Create vector of strings
	std::string tString = y;           //Create temporary string

	for (int i = 0; i < tString.size(); ++i)
	{
		if (std::isspace(tString[i])) //Check whether the current element is a white space
		{
			// If yes, check if the current index is greater than 0
			if (i > 0)
			{
				//Get previous element and change it to lower case character
				tString[i - 1] = std::tolower(tString[i - 1]);
			}	 
		}
		if (std::islower(tString[i])) // Check whether the current element is a lower case character
		{
			//If yes, change it to upper case character
			tString[i] = std::toupper(tString[i]);

			if (i > 0)
			{
				//Get previous element and change it to lower case character
				tString[i - 1] = std::tolower(tString[i - 1]);
			}
			
			//Add current string to the vector
			tStrings.push_back(tString);
		}
	}
	return tStrings;
}

int main()
{
	wave("att ack");

	system("PAUSE");
	return 0;
}