#ifndef BST_H
#define BST_H

#include "TreeNode.h"
#include <iostream>
using namespace std;

class BST{
    private:
        TreeNode *root; //puntatore alla radice dell'albero
        void preorderWalk(TreeNode* root);
        void insert(TreeNode **root, int x);
        TreeNode* search(TreeNode *root, int x);
        int massimoRec(TreeNode* root);
        void simmetricWalk(TreeNode* root);
        void postWalk(TreeNode* root);
        int simmetricSum(TreeNode* root, int sum);
        int postCount(TreeNode* root, int i);
        void BSTdestructor(TreeNode* root);
    public:
        BST();
        ~BST();
        void preorderHelper();
        void postHelper();
        int simmetriSumHelper();
        void simmetricHelper();
        void insertHelper(int x);
        int postCountHelper();
        TreeNode* searchHelper(int x);
        int massimoIter();
        int massimoHelper();
};


#endif // BST_H
