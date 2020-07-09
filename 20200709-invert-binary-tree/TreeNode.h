/**
 * Definition for a binary tree node.
 *
 */

#include <iostream>
 
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class TreeManager {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) {
            return NULL;
        }
        TreeNode* swap = root->right;
        root->right = root->left;
        root->left = swap;
        invertTree(root->right);
        invertTree(root->left);
        return root;
    }

    void printTree(TreeNode* tree) {
        std::cout << "Tree value : " << tree->val << std::endl;
        if (tree->left != nullptr) {
            std::cout << "has left!" << std::endl;
            printTree(tree->left);
        }
        if (tree->right != nullptr) {
            std::cout << "has right" << std::endl;
            printTree(tree->right);
        }
    }
};
