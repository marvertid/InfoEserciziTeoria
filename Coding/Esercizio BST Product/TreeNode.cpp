#include "treenode.h"

TreeNode::TreeNode() {
	left = right = nullptr;
	//ereditarieta costruttore di info 
}
TreeNode::TreeNode(Product info) {
	this->info = info;
	left = right = nullptr;
}
TreeNode::TreeNode(TreeNode* right, TreeNode* left, Product info) {
	this->right = right;
	this->left = left;
	this->info = info;
}
TreeNode* TreeNode::getRight() {
	return right;
}
TreeNode* TreeNode::getLeft() {
	return left;
}
TreeNode** TreeNode::getPtrRight() {
	return &right;
}
TreeNode** TreeNode::getPtrLeft() {
	return &left;
}
Product TreeNode::getInfo() {
	return info;
}
void TreeNode::setRight(TreeNode* right) {
	this->right = right;
}
void TreeNode::setLeft(TreeNode* left) {
	this->left = left;
}
void TreeNode::setInfo(Product info) {
	this->info = info;
}