#include "treenode.h"

TreeNode::TreeNode() {
	right = left = nullptr;
}
TreeNode::TreeNode(Data data) {
	right = left = nullptr;
	this->data = data;
}
TreeNode::TreeNode(Data data, TreeNode* right, TreeNode* left) {
	this->data = data;
	this->right = right;
	this->left = left;
}
TreeNode* TreeNode::getLeft() {
	return left;
}
TreeNode* TreeNode::getRight() {
	return right;
}
TreeNode** TreeNode::getPtrLeft() {
	return &left;
}
TreeNode** TreeNode::getPtrRight() {
	return &right;
}

Data TreeNode::getInfo() {
	return data;
}

void TreeNode::setInfo(Data data) {
	this->data = data;
}
void TreeNode::setRight(TreeNode* right) {
	this->right = right;
}
void TreeNode::setLeft(TreeNode* left) {
	this->left = left;
}
void TreeNode::setTreeNode(Data data, TreeNode* left, TreeNode* right) {
	this->data = data;
	this->left = left;
	this->right = right;
}