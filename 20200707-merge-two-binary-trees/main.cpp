#include <iostream>
#include <vector>
#include "TreeNode.h"

int main() 
{
    // first tree node
    TreeNode* node1 = new TreeNode(5);
    TreeNode* node2 = new TreeNode(3, node1, nullptr);
    TreeNode* node3 = new TreeNode(2);
    TreeNode* rootNode1 = new TreeNode(1, node2, node3);

    // second tree node
    TreeNode* node4 = new TreeNode(4);
    TreeNode* node5 = new TreeNode(7);
    TreeNode* node6 = new TreeNode(1, nullptr, node4);
    TreeNode* node7 = new TreeNode(3, nullptr, node5);
    TreeNode* rootNode2 = new TreeNode(2, node6, node7);
    
    TreeNodeMerger merger;
    TreeNode* mergedTrees = merger.mergeTrees(rootNode1, rootNode2);
    merger.printTree(mergedTrees);

    return 0;
}
