#include <iostream>
//Task Name: Is this a triangle?
/*Task Description: Implement a method that accepts 3 integer values a, b, c. The method should return true if a triangle can be built with the sides of given length and false in any other case.

(In this case, all triangles must have surface greater than 0 to be accepted).


Task Link: https://www.codewars.com/kata/56606694ec01347ce800001b/train/cpp
*/

namespace Triangle
{
	bool isTriangle(int a, int b, int c)
	{
		//Create unsigned int temporary variables
		// Convert signed int types to unsigned int in order to avoid int overflow
		unsigned int tA = unsigned(a);
		unsigned int tB = unsigned(b);
		unsigned int tC = unsigned(c);

		// Check if the triangle can be built
		if (tA + tB > tC && tB + tC > tA && tC + tA > tB)
			return true;
		else
		return false;
	}
}

int main()
{
bool bIsTriangle = Triangle::isTriangle(2147483647, 2147483647, 2147483647);

	return 0;
}