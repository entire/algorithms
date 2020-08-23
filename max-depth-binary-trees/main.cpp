#include <iostream>
#include <vector>
#include "TreeNode.h"

int main() 
{
    // second tree node
    TreeNode* node1 = new TreeNode(1);
    TreeNode* node2 = new TreeNode(5, node1, nullptr);
    TreeNode* node3 = new TreeNode(5, node2, nullptr);
    TreeNode* node5 = new TreeNode(7, nullptr, node3);
    TreeNode* node6 = new TreeNode(3, node5, nullptr);
    TreeNode* node7 = new TreeNode(3, nullptr, nullptr);
    TreeNode* rootNode = new TreeNode(2, node6, node7);
    
    TreeNodeDepth search;
    int depth = search.maxDepth(rootNode);
    std::cout << "max depth: " << depth << std::endl;

    return 0;
}
