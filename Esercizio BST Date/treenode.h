#ifndef TREENODE_H
#define TREENODE_H

#include "data.h"

class TreeNode {
	private:
		TreeNode* right;
		TreeNode* left;
		Data data;
	public:
		TreeNode();
		TreeNode(Data data);
		TreeNode(Data data, TreeNode* right, TreeNode* left);
		TreeNode* getLeft();
		TreeNode* getRight();
		TreeNode** getPtrLeft();
		TreeNode** getPtrRight();
		Data getInfo();
		void setInfo(Data data);
		void setRight(TreeNode* right);
		void setLeft(TreeNode* left);
		void setTreeNode(Data data, TreeNode* left, TreeNode* right);

};

#endif
