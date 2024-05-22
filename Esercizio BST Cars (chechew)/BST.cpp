#include "bst.h"


BST::BST() {
    root = nullptr;
}
BST::~BST() {
    destructor(&root);
}
//private
void BST::insert(TreeNode** root, Cars car) {
    if (!(*root)) {
        *root = new TreeNode(car);
    } else {
        if (car.getTarga() > (*root)->getCar().getTarga()) {
            insert((*root)->getPtrRight(), car);
        }
        if (car.getTarga() < (*root)->getCar().getTarga()) {
            insert((*root)->getPtrLeft(), car);
        }
    }
}
void BST::removeCar(TreeNode** root, Cars car) {
} //non implementato
void BST::preorder(TreeNode* root) {
    if (root) {
        cout << endl << root->getCar();
        preorder(root->getLeft());
        preorder(root->getRight());
    }
}
void BST::postorder(TreeNode* root) {
    if (root) {
        postorder(root->getLeft());
        postorder(root->getRight());
        cout << endl << root->getCar();
    }
}
void BST::simmetric(TreeNode* root) {
    if (root) {
        simmetric(root->getLeft());
        cout << endl << root->getCar();
        simmetric(root->getRight());
    }
}
TreeNode* BST::search(TreeNode* root, Cars car) {
    if (!root || root->getCar().getTarga() == car.getTarga())
        return root;

    if (car.getTarga() > root->getCar().getTarga())
        return search(root->getRight(), car);


    return search(root->getLeft(), car);
}

void BST::destructor(TreeNode** root) {
    if (*root) {
        destructor((*root)->getPtrLeft());
        destructor((*root)->getPtrRight());
        delete *root;
        *root = nullptr;
    }
}

void BST::reduce(TreeNode* root, int targa) {
    if (root || root->getCar().getTarga() != targa) {

        if (targa > root->getCar().getTarga()) {
            reduce(root->getRight(), targa);
        }

        if (targa < root->getCar().getTarga()) {
            reduce(root->getLeft(), targa);
        }

        root->getCar().setPrezzo(root->getCar().getPrezzo() - (root->getCar().getPrezzo() * 0.05f));
    }
}

//public
void BST::operator--() {
    int targa;
    cout << endl << "Inserire targa da cercare: ";
    cin >> targa;
    reduce(root, targa);
}
void BST::insertHelper(Cars car) {
    insert(&root, car);
}
void BST::removeCarHelper(Cars car) {
}
void BST::preorderHelper() {
    preorder(root);
}
void BST::postorderHelper() {
    postorder(root);
}
void BST::simmetricHelper() {
    simmetric(root);
}
Cars BST::searchHelper(Cars car) {
    return search(root, car)->getCar();
}
