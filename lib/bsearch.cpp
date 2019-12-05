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
}

int main() {
	Node* root = NULL;
	root = Insert(root,15);
	root = Insert(root,10);
	root = Insert(root,5);
};
