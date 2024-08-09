#include <iostream>
using namespace std;
class Node {
    public:
        int key;
        Node *left, *right;
        Node(int item) : key(item), left(nullptr), right(nullptr) {}
};
class BinarySearchTree {
    private:
        Node* root;
        Node* insertRec(Node* root, int key) {
            if (root == nullptr) {
                return new Node(key);
            }
            if (key < root->key) {
                root->left = insertRec(root->left, key);
            } else {
                root->right = insertRec(root->right, key);
            }
            return root;
        }
        bool searchRec(Node* root, int key) const {
            if (root == nullptr) {
                return false;
            }
            if (key == root->key) {
                return true;
            }
            return key < root->key ? searchRec(root->left, key) : searchRec(root->right, key);
        }
    public:
        BinarySearchTree() : root(nullptr) {}
        void insert(int key) {
            root = insertRec(root, key);
        }
        bool search(int key) const {
            return searchRec(root, key);
        }
};
int main() {
    BinarySearchTree bst;
    bst.insert(10);
    bst.insert(5);
    bst.insert(15);
    cout << "Is 10 in BST? " << (bst.search(10) ? "Yes" : "No") << endl;
    cout << "Is 20 in BST? " << (bst.search(20) ? "Yes" : "No") << endl;
    return 0;
}