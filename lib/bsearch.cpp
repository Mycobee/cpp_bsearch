#include <iostream>

class Node
{
				public:
				int key;
				int left;
				int right;
};

class Tree
{
	public:
	int root;
	void readKey(int key);

};

void Tree::readKey(int key) {  // Method/function defined inside the class
	if ( root == 0 ) { 
		//set the root
		root == key;
	}
}


int main () 
{ 
	Node node1;
	Tree tree1;
	tree1.root = 0;
	tree1.readKey(10);
	node1.key = 5;
	node1.left = 3;
	node1.right= 3;
	
	std::cout << node1.key << " " << node1.left << " " << node1.right; 
	std::cout << tree1.root; 
	return 0;
}
