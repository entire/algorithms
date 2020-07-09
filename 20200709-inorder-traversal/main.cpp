#include <iostream>
#include <vector>
#include "TreeNode.h"

int main() 
{
    // second tree node
    TreeNode* node1 = new TreeNode(1, nullptr, nullptr);
    TreeNode* node2 = new TreeNode(3, nullptr, nullptr);
    TreeNode* node3 = new TreeNode(6, nullptr, nullptr);
    TreeNode* node4 = new TreeNode(9, nullptr, nullptr);
    TreeNode* node5 = new TreeNode(2, node1, node2);
    TreeNode* node6 = new TreeNode(7, node3, node4);
    TreeNode* rootNode = new TreeNode(4, node5, node6);
    
    TreeManager treeManager;
    std::vector<int> orders = treeManager.inorderTraversalIterative(rootNode);
    for (auto& order : orders) {
        std::cout << order << std::endl;
    }

    return 0;
}
