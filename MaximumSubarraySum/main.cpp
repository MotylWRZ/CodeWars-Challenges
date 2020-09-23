#include <iostream>
#include <vector>
#include <queue>
#include <list>
// Task Name : Maximum subarray sum

/* Task Description:

The maximum sum subarray problem consists in finding the maximum sum of a contiguous subsequence in an array or list of integers:

maxSequence({-2, 1, -3, 4, -1, 2, 1, -5, 4});
//should be 6: {4, -1, 2, 1}

Easy case is when the list is made up of only positive numbers and the maximum sum is the sum of the whole array. If the list is made up of only negative numbers, return 0 instead.

Empty list is considered to have zero greatest sum. Note that the empty list or array is also a valid sublist/subarray.

*/
//Task Link : https://www.codewars.com/kata/54521e9ec8e60bc4de000d6c/train/cpp


using namespace std;

int maxSequence(const vector<int>& arr)
{
	list<int> sumsList;
	int sum = 0;

	for (int i = 0; i < arr.size(); i++)
	{
		sum = arr[i];
		for (int j = i + 1; j < arr.size(); j++)
		{
			sum += arr[j];
			sumsList.push_back(sum);
		}
	}

	sumsList.sort();

	if (sumsList.back() < 0)
		return 0;
	else
	return sumsList.back();
}

int main()
{
	std::vector<int> vec { 0, 1, 2, 3, 4 };
	std::vector<int> vec2{ -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	int a = maxSequence(vec2);



	return std::cin.get();
}