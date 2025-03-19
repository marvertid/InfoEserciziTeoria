#include "treenode.h"

TreeNode::TreeNode() {
    left = right = nullptr;
    //ereditarieta car
}
TreeNode::TreeNode(Cars car) {
    this->car = car;
    left = right = nullptr;
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
Cars TreeNode::getCar() {
    return car;
}
void TreeNode::setLeft(TreeNode* left) {
    this->left = left;
}
void TreeNode::setRight(TreeNode* right) {
    this->right = right;
}
void TreeNode::setCar(Cars car) {
    this->car = car;
}