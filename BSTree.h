#pragma once
#include "Node.h"

class BSTree
{
private:
	Node* root;
public:
	BSTree();
	void insert(int key);
	Node* insertNode(Node* node, int key);
	~BSTree();
};

