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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if (t1 == nullptr && t2 == nullptr) return nullptr;
        if (t1 == nullptr) return t2;
        if (t2 == nullptr) return t1;

        t1->val = t1->val + t2->val;
        t1->left = mergeTrees(t1->left, t2->left);
        t1->right = mergeTrees(t1->right, t2->right);
        return t1;
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