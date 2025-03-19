#ifndef TREENODE_H
#define TREENODE_H

#include "product.h"
#include <iostream>
using namespace std;

class TreeNode {
	private:
		TreeNode* left;
		TreeNode* right;
		Product info;
	public:
		TreeNode();
		TreeNode(Product info);
		TreeNode(TreeNode* right, TreeNode* left, Product info);
		TreeNode* getRight();
		TreeNode* getLeft();
		TreeNode** getPtrRight();
		TreeNode** getPtrLeft();
		Product getInfo();
		void setRight(TreeNode* right);
		void setLeft(TreeNode* left);
		void setInfo(Product info);
};

#endif
