#include <iostream>
#include <string>
#include <vector>

// Task Name : Split Strings
/* Task Description:
Complete the solution so that it splits the string into pairs of two characters. 
If the string contains an odd number of characters then it should replace 
the missing second character of the final pair with an underscore ('_').

Examples:

solution("abc") // should return {"ab", "c_"}
solution("abcdef") // should return {"ab", "cd", "ef"}

Task Link: https://www.codewars.com/kata/515de9ae9dcfc28eb6000001
*/

std::vector<std::string> solution(const std::string &s)
{
	std::vector<std::string> tVec;
	std::string tPair;
	int tPairCounter = 0;

	for (int i = 0; i < s.size(); i++)
	{
		tPair += s[i];
		tPairCounter++;

		if (tPairCounter > 1)
		{
			tVec.push_back(tPair);

			tPair.clear();
			tPairCounter = 0;
			continue;
		}

		if (tPairCounter < 2 && i == s.size() - 1)
		{
			tPair += '_';
			tVec.push_back(tPair);
		}

	}

	return tVec;
}

int main()
{
	solution("abc");
	return 0;
}