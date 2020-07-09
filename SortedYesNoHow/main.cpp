#include <iostream>
#include <vector>
#include <string>

// Task Name : Sorted? yes? no? how?
/*Task Description: Complete the method which accepts an array of integers, and returns one of the following:

    "yes, ascending" - if the numbers in the array are sorted in an ascending order
    "yes, descending" - if the numbers in the array are sorted in a descending order
    "no" - otherwise

You can assume the array will always be valid, and there will always be one correct answer.


Task Link: https://www.codewars.com/kata/580a4734d6df748060000045/train/cpp
*/

std::string is_sorted_and_how(std::vector<int> array)
{
	int tCurrent = array[0];
	int asc = 0; // number of elements sorted in ascending order
	int dsc = 0; // number of elements sorted in descending order

	for (int i = 1; i < array.size(); i++)
	{
		if (tCurrent <= array[i])
		{
			tCurrent = array[i];
			asc ++;
		}
		else if((tCurrent >= array[i]))
		{
			tCurrent = array[i];
			dsc++;
		}
	}
	
	if(asc == array.size() - 1)
	return "yes, ascending";
	if (dsc == array.size() - 1)
		return "yes, descending";
	else
		return "no";
}

int main()
{
	std::vector<int> array = { 0,1,2,2 };
	is_sorted_and_how(array);

	std::cin.get();
	return 0;
}