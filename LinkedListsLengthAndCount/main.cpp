#include <iostream>

//Task Name: Linked Lists - Length & Count
/*Task Description: 
Implement Length() to count the number of nodes in a linked list.
Implement Count() to count the occurrences of an integer in a linked list.
The push()/Push() and buildOneTwoThree()/BuildOneTwoThree() functions do not need to be redefined.

Examples: 
1. 
length(null) => 0
length(1 -> 2 -> 3 -> null) => 3

2.
count(null, 1) => 0
count(1 -> 2 -> 3 -> null, 1) => 1
count(1 -> 1 -> 1 -> 2 -> 2 -> 2 -> 2 -> 3 -> 3 -> null, 2) => 4

Task Link: https://www.codewars.com/kata/55beec7dd347078289000021/train/cpp
*/
struct Node {
	Node* next;
	int data;
};

int Length(Node* head)
{
	Node* currentNodePtr = head; // current node ptr
	int count = 0;
	while (currentNodePtr != nullptr)
	{
		count++;
		currentNodePtr = currentNodePtr->next; // point to the next node
	}
	return count;
}

int Count(Node* head, int data)
{
	int intCount = 0;
	Node* currentNodePtr = head; // current node ptr
	while (currentNodePtr != nullptr)
	{
		if (currentNodePtr->data == data)
			intCount++;
		currentNodePtr = currentNodePtr->next; // point to the next node
	}
	return intCount;
}

int main()
{
	Node* h = new Node; // Head
	Node* n = h; // Current node pointer initially pointing at head

	//Create another 10 nodes in the linked list
	for (int i = 0; i < 10; ++i)
	{
		n->data = 10; // Set data of current node equal to current looop counter
		n->next = new Node; // Create a new node
		n = n->next; // set N pointer to point at the new node (next node)
		n->next = nullptr;	
		n->data = 10; // Set data of current node equal to current looop counter
	}

	
	std::cout << Count(h, 10) << std::endl;

	system("PAUSE");
	return 0;
}