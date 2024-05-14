#include "TreeNode.h"

TreeNode::TreeNode(){
    info = 0;
    left = right = nullptr;
}

TreeNode::TreeNode(int i){
    info = i;
    left = right = nullptr;
}

TreeNode::TreeNode(int i, TreeNode* sx, TreeNode* dx){
    info = i;
    left = sx;
    right = dx;
}

int TreeNode::getInfo(){
    return info;
}

TreeNode* TreeNode::getLeft(){
    return left;
}

TreeNode* TreeNode::getRight(){
    return right;
}

void TreeNode::setInfo(int i){
    info = i;
}

void TreeNode::setLeft(TreeNode *sx){
    left = sx;
}

void TreeNode::setRight(TreeNode *dx){
    right = dx;
}

void TreeNode::setTreeNode(int i, TreeNode *sx, TreeNode *dx){
    info = i;
    left = sx;
    right = dx;
}

TreeNode** TreeNode::getPtrLeft(){
    return &left;
}

TreeNode** TreeNode::getPtrRight(){
    return &right;
}
