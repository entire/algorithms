/**
 * Definition for a binary tree node.
 *
 */

#include <iostream>
#include <vector>
#include <stack>

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

        // step to next depth
        t1->left = mergeTrees(t1->left, t2->left);
        t1->right = mergeTrees(t1->right, t2->right);
        return t1;
    }

    int maxDepth(TreeNode* root) {
        // both child nodes dont exist
        if (root == NULL) {
            return 0;
        }

        // both nodes exist
        return 1 + std::max(maxDepth(root->left), maxDepth(root->right));
    }

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

    std::vector<int> inorderTraversal(TreeNode* root) {
        if (root == NULL) {
            return std::vector<int> {};
        }

        std::vector<int> left = inorderTraversal(root->left);
        left.push_back(root->val);
        std::vector<int> right = inorderTraversal(root->right);
        left.insert(left.end(), right.begin(), right.end());
        return left;
    }

    std::vector<int> inorderTraversalIterative(TreeNode* root) {
        std::stack<TreeNode *> stack;
        TreeNode* current = root;
        std::vector<int> inorder;
        while (current != NULL || !stack.empty()) {
            std::cout << ">loop" << std::endl;
            while (current != NULL) {
                std::cout << "\t\ttwe are at: " << current->val << std::endl;
                stack.push(current); // visited
                current = current->left; // move left
            }
            // current should be empty at this point
            std::cout << "\tcurrent is empty now" << std::endl;
            std::cout << "\tset current to stack.top()" << std::endl;
            current = stack.top(); // we return to last visited
            std::cout << "\tpop stack!" << std::endl;
            stack.pop(); // remove last visited, go to previous
            std::cout << "\tcurrent: " << current->val << std::endl;
            inorder.push_back(current->val);
            if (stack.empty()) {
                std::cout << "\tstack is currently empty" << std::endl;
            }
            current = current->right;
       }
       return inorder;
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
