#include <iostream>
#include <numeric>      // std::accumulate#
#include <vector>

// Task Name : Sum of Two Integers 
/* Task Description:
Given Two integers a , b , find The sum of them , BUT You are not allowed to use the operators + and -

	The numbers (a,b) may be positive , negative values or zeros .

	Returning value will be an integer .


Input >> Output Examples

1- Add (5,19) ==> return (24)

2- Add (-27,18) ==> return (-9)

3- Add (-14,-16) ==> return (-30)

Task Link: https://www.codewars.com/kata/5a9c35e9ba1bb5c54a0001ac
*/

int Add(int x, int y)
{
	std::vector<int> tVec= { x, y };
	int result = std::accumulate(tVec.begin(), tVec.end(), 0);
	return result;
}

int main()
{
	int a = Add(2, 1);

	return 0;
}