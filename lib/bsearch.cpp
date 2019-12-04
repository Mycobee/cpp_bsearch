#include <iostream>

class Node
{
				public:
				int key;
				int left;
				int right;
};

int main () 
{ 
	Node node1;
	node1.key = 5;
	node1.left = 3;
	node1.right= 3;
	std::cout << node1.key << " " << node1.left << " " << node1.right; 
	std::cout << "Hello World!"; 
	return 0;
}
