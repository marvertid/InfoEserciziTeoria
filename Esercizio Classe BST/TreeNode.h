#ifndef TREENODE_H
#define TREENODE_H

class TreeNode{
    private:
        int info; //Informazione memorizzata nel nodo
        TreeNode *left; //Punatatore al nodo sinistro
        TreeNode *right; //Punatatore al nodo destro
    public:
        TreeNode();
        TreeNode(int i);
        TreeNode(int i, TreeNode* sx, TreeNode* dx);
        int getInfo();
        TreeNode* getLeft();
        TreeNode* getRight();
        TreeNode** getPtrLeft();
        TreeNode** getPtrRight();
        void setInfo(int i);
        void setLeft(TreeNode *sx);
        void setRight(TreeNode *dx);
        void setTreeNode(int i, TreeNode *sx, TreeNode *dx);
};

#endif // TREENODE_H
