#include "bst.h"

BST::BST() {
	root = nullptr;
}
BST::BST(TreeNode* root) {
	this->root = root;
}

void BST::insert(Product info, TreeNode** root) {
	if (!*root) {
		*root = new TreeNode(info);
	}
	else {
		 if (info.getCode() > (*root)->getInfo().getCode())
			insert(info, (*root)->getPtrRight());
		 else if (info.getCode() < (*root)->getInfo().getCode())
			insert(info, (*root)->getPtrLeft());
	}
}
TreeNode* BST::search(Product p, TreeNode* root) {
	if (!root || root->getInfo().getCode() == p.getCode()) 
		return root;
	if (p.getCode() < root->getInfo().getCode())
		return search(p, root->getLeft());

	return search(p, root->getRight());
}
void BST::destructorBST(TreeNode** root) {
	if (*root) {
		destructorBST((*root)->getPtrLeft());
		destructorBST((*root)->getPtrRight());
		delete* root;
		*root = nullptr;
	}
}
int BST::countNode(TreeNode* root) {
	if (root)
	return countNode(root->getLeft()) + 1 + countNode(root->getRight());

	return 0;
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
		simmetricWalk(root->getLeft());
		cout << endl << root->getInfo();
		simmetricWalk(root->getRight());
	}
}


istream& operator>>(istream& in, BST& bst){ //sbagliato andava fatto nella lista
	cout << "Insert a product: ";
	Product p;
	in >> p;
	bst.insert(p, &bst.root);

	return in;
}
BST::~BST() {
	destructorBST(&root);
}
Product BST::operator%(Product p) {
	return search(p, root)->getInfo();
}
int BST::operator!() {
	return countNode(root);
}
void BST::preorderHelper() {
	preorderWalk(root);
} 
void BST::postorderHelper() {
	postorderWalk(root);
}
void BST::simmetricHelper() {
	simmetricWalk(root);
}

void BST::insertHelper(Product p) {
	insert(p, &root);
}