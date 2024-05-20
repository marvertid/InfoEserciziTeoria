#ifndef BST_H
#define BST_H

#include "treenode.h"

class BST {
	private:
		TreeNode* root;
		void preorderWalk(TreeNode* root);
		void postorderWalk(TreeNode* root);
		void simmetricWalk(TreeNode* root);
		void insert(Product info, TreeNode** root);
		TreeNode* search(Product p, TreeNode* root);
		void destructorBST(TreeNode** root);
		int countNode(TreeNode* root);
	public:
		BST();
		BST(TreeNode* root);
		~BST();
		Product operator%(Product p);
		int operator!();
	friend istream& operator>>(istream& in, BST& bst);
		void insertHelper(Product p);
		void preorderHelper();
		void postorderHelper();
		void simmetricHelper();

};

#endif