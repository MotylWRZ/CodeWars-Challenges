#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

//Task : Reverse Words
/*Task Description: Complete the function that accepts a string parameter, and reverses each word in the string. 
All spaces in the string should be retained.*/
/*Example: "This is an example!" ==> "sihT si na !elpmaxe"
"double  spaces"      ==> "elbuod  secaps"*/
//Task URL: https://www.codewars.com/kata/5259b20d6021e9e14c0010d4/train/cpp


std::string reverse_words(std::string str)
{
	std::string tString;
	std::string result;

	for (int i = 0; i < str.size(); i++)
	{
		//Check wheter current element is a white-space character or it is the last element
		if(isspace(str[i]))
		{
			// If yes, reverse the tString
			std::reverse(tString.begin(), tString.end());
			// Append tSring to the result string
			result.append(tString);
			// Resize tString to elements
			tString.resize(0);
			// Add space to the result string
			result.push_back(str[i]);  
		}
		// Check wheter the curent element is the last element
		else if (i == str.size() - 1)
		{
			// If yes, add the last element to the tString, reverse it and append it to the result
			tString.push_back(str[i]);
			std::reverse(tString.begin(), tString.end());
			result.append(tString);
			tString.resize(0);
		}
		else
		{
			// If not, add this element to the tString
			tString.push_back(str[i]);
		}
	}
	return result;
}



int main()
{

	reverse_words("double  spaced  words");
	system("PAUSE");
	return 0;
}