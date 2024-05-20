#ifndef BST_H
#define BST_H
#include "treenode.h"

class BST {
	private:
		TreeNode* root;
		void preorderWalk(TreeNode* root);
		void postorderWalk(TreeNode* root);
		void simmetricWalk(TreeNode* root);
		Data recentDate(TreeNode* root);
		void insert(Data data, TreeNode** root);
		void destructorBST(TreeNode** root);
	public:
		BST();
		~BST();
		void preoroderHelper();
		void postorderHelper();
		void simmetricHelper();
		Data recentDateHelper();
		void insertHelper(Data data);

};

#endif