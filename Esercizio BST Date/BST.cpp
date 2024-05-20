#include "bst.h"
#include "data.h"
#include <iostream>

using namespace std;

BST::BST() {
	root = nullptr;
}
BST::~BST() {
	destructorBST(&root);
}

void BST::preoroderHelper() {
	preorderWalk(root);
}
void BST::postorderHelper() {
	postorderWalk(root);
}
void BST::simmetricHelper() {
	simmetricWalk(root);
}

Data BST::recentDateHelper() {
	return recentDate(root);
}

void BST::insertHelper(Data data) {
	insert(data, &root);
}


void BST::preorderWalk(TreeNode* root) {
	if (root) {
		cout << endl << root->getInfo();
		preorderWalk(root->getLeft());
		preorderWalk(root->getRight());
	}
}
void BST::postorderWalk(TreeNode* root) {
	if (root) {
		postorderWalk(root->getLeft());
		postorderWalk(root->getRight());
		cout << endl << root->getInfo();
	}
}
void BST::simmetricWalk(TreeNode* root) {
	if (root) {
		postorderWalk(root->getLeft());
		cout << endl << root->getInfo();
		postorderWalk(root->getRight());
	}
}

Data BST::recentDate(TreeNode* root) {
	TreeNode* pAux = root;
	while (pAux->getRight()) {
		pAux = pAux->getRight();
	}

	return pAux->getInfo();
}
void BST::insert(Data data, TreeNode** root) {
	if (!*root) {
		*root = new TreeNode(data);
	}
	else {
		if (data > (*root)->getInfo())
			insert(data, (*root)->getPtrRight());
		else
			if ((*root)->getInfo() > data)
				insert(data, (*root)->getPtrLeft());
	}
}

void BST::destructorBST(TreeNode** root) {
	if (*root) {
		destructorBST((*root)->getPtrLeft());
		destructorBST((*root)->getPtrRight());
		delete *root;
		*root = nullptr;
	}
}