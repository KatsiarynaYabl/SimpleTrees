#include "BSTree.h"


BSTree::BSTree()
{
	root = nullptr;
}

void BSTree::insert(int key)
{
	root = insertNode(root, key);
}

Node* BSTree::insertNode(Node* node, int key)
{
	if (node == nullptr) {
		node = new Node(key);
		return node;
	}
	if(key > node->getKey()) {
		node->setRight(insertNode(node->getRight(), key));
	}
	else {
		node->setLeft(insertNode(node->getLeft(), key));
	}
}



BSTree::~BSTree()
{
}
