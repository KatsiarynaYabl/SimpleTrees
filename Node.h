#pragma once
class Node
{
private:
	int key;
	Node* left;
	Node* right;
	Node* parent;
public:
	Node();
	Node(int k);
	void setKey(int key);
	int getKey();
	void setLeft(Node* l);
	Node* getLeft();
	void setRight(Node* r);
	Node* getRight();
	void setParent(Node* p);
	Node* setParent();
	~Node();
};

