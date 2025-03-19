#ifndef ESERCIZIO_BST_CARS__CHECHEW__BST_H
#define ESERCIZIO_BST_CARS__CHECHEW__BST_H

#include "treenode.h"

class BST {
    private:
        TreeNode* root;
        void insert(TreeNode** root,Cars car);
        void removeCar(TreeNode** root,Cars car); //non implementato
        void preorder(TreeNode* root);
        void postorder(TreeNode* root);
        void simmetric(TreeNode* root);
        TreeNode* search(TreeNode* root, Cars car);
        void destructor(TreeNode** root);
        void reduce(TreeNode* root, int targa);
    public:
        BST();
        ~BST();
        void insertHelper(Cars car);
        void removeCarHelper(Cars car);
        void preorderHelper();
        void postorderHelper();
        void simmetricHelper();
        Cars searchHelper(Cars car);
        void operator--();
};

#endif //ESERCIZIO_BST_CARS__CHECHEW__BST_H
