#include "bst.h"

BST::BST(){
    root = nullptr;
}

BST::~BST() {
    BSTdestructor(&root);
}

void BST::BSTdestructor(TreeNode** root) {
    if (*root) {
        BSTdestructor((*root)->getPtrLeft());
        BSTdestructor((*root)->getPtrRight());
        delete *root;
        *root = nullptr;
    }

}

//Visita in ordine anticipato ricorsiva
void BST::preorderWalk(TreeNode* root){
//BASE: visita della radice
    if(root != nullptr){
        cout << endl << root->getInfo();
        preorderWalk(root->getLeft());  //PASSO: visita del sottoalbero di sinistra in ordine anticipato
        preorderWalk(root->getRight()); //PASSO: visita del sottoalbero di destra in ordine anticipato
    }
}

void BST::preorderHelper(){
    preorderWalk(root);
}

void BST::insert(TreeNode **root, int x){
    //BASE
    if(*root == nullptr){
        *root = new TreeNode(x);
    } else {
        //PASSO
        if (x > (*root)->getInfo())
            insert((*root)->getPtrRight(), x);
        else
            if(x < (*root)->getInfo())
                insert((*root)->getPtrLeft(), x);
    }
}

void BST::insertHelper(int x){
    insert(&root, x);
}

/*l'algoritmo di ricerca restituisce il puntatore al nodo
che contiene il dato cercato*/
TreeNode* BST::search(TreeNode *root, int x){
    //BASE
    if(root == nullptr || root->getInfo() == x)
        return root;
    //PASSP
    if(x < root->getInfo())
        return search(root->getLeft(), x);
    //else
    return search(root->getRight(), x);
}

TreeNode* BST::searchHelper(int x){
    return search(root, x);
}

//si ipotizza l'albero con almeno un nodo
int BST::massimoIter(){
    TreeNode* pAux = root;
    while(pAux->getRight() != nullptr){
        pAux = pAux->getRight();
    }
    return pAux->getInfo();  //il valore massimo si trova pi� a destra possibile
}

int BST::massimoRec(TreeNode* root){
    if(root->getRight() != nullptr)
        return massimoRec(root->getRight());
    return root->getInfo();
}

int BST::massimoHelper(){
    return massimoRec(root);
}

void BST::simmetricWalk(TreeNode* root) {
    if (root) {
        simmetricWalk(root->getLeft());
        cout << endl << root->getInfo();
        simmetricWalk(root->getRight());
    }
}

void BST::simmetricHelper() {
    simmetricWalk(root);
}

void BST::postWalk(TreeNode* root) {
    if (root) {
        postWalk(root->getLeft());
        postWalk(root->getRight());
        cout << endl << root->getInfo();
    }
}

void BST::postHelper() {
    postWalk(root);
}

int BST::simmetricSum(TreeNode* root) {
     if (root) {
        return simmetricSum(root->getLeft()) + root->getInfo() + simmetricSum(root->getRight());
     }

     return 0;
}

int BST::simmetriSumHelper() {
   return simmetricSum(root);
}

int BST::postCount(TreeNode* root) {
    if (root) {
        return postCount(root->getLeft()) + 1 + postCount(root->getRight());
    }

    return 0;
}

int BST::postCountHelper() {
    return postCount(root);
}
