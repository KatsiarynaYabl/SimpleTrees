#include "Node.h"


Node::Node()
{
}

Node::Node(int k)
{
	this->key = k;
	this->left = nullptr;
	this->right = nullptr;
	this->parent = nullptr;
}

void Node::setKey(int key)
{
	this->key = key;
}

int Node::getKey()
{
	return this->key;
}

void Node::setLeft(Node * l)
{
	this->left = l;
}

Node * Node::getLeft()
{
	return this->left;
}

void Node::setRight(Node * r)
{
	this->right = r;
}

Node * Node::getRight()
{
	return this->right;
}

void Node::setParent(Node * p)
{
	this->parent = p;
}

Node * Node::setParent()
{
	return this->parent;
}

Node::~Node()
{
}
