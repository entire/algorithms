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

class TreeNodeDepth {
public:
    int maxDepth(TreeNode* root) {
        // both child nodes dont exist
        if (root == NULL) {
            return 0;
        }

        // both nodes exist
        return 1 + std::max(maxDepth(root->left), maxDepth(root->right));
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
