#include <iostream>

struct Node {
	int data;
	Node* left;
	Node* right;
};

Node* GetNewNode(int data) {
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

Node* Insert(Node* root,int data) {
	if (root==NULL) { //empty tree
		root = GetNewNode(data);
		return root;
	}				
	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}
	else {
		root->right = Insert(root->right,data);	
	}
	return root;
}

bool Search(Node* root,int data) {
	if(root==NULL) return false;
	else if(root->data == data) return true;
	else if(data <= root->data) return Search(root->left,data);
	else return Search(root->right,data);
};

int main() {
	Node* root = NULL;
	root = Insert(root,15); root = Insert(root,10); root = Insert(root,20);
	root = Insert(root,25); root = Insert(root,8); root = Insert(root,12);
	int number;
	std::cout << "Enter a number to be searched\n";
	std::cin>>number;
	if( Search(root,number) == true) std::cout << "Found\n";
	else std::cout << "Not found!\n";
};
