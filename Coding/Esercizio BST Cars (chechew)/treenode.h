#ifndef ESERCIZIO_BST_CARS__CHECHEW__TREENODE_H
#define ESERCIZIO_BST_CARS__CHECHEW__TREENODE_H

#include "cars.h"

class TreeNode {
    private:
        TreeNode* left, *right;
        Cars car;
    public:
        TreeNode();
        TreeNode(Cars car);
        TreeNode* getLeft();
        TreeNode* getRight();
        TreeNode** getPtrLeft();
        TreeNode** getPtrRight();
        Cars getCar();
        void setLeft(TreeNode* left);
        void setRight(TreeNode* right);
        void setCar(Cars car);
};

#endif //ESERCIZIO_BST_CARS__CHECHEW__TREENODE_H
