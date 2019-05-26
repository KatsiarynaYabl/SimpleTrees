#include <stdio.h>
#include <iostream>
#include "trees.h"

using namespace std;

int main() {
	BSTree* BST = new BSTree();
	BST->insert(4);
	BST->insert(5);
	BST->insert(10);
	BST->insert(0);
	system("pause");
	return 0;
}