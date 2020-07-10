#include <iostream>
#include <vector>
#include "BinarySearcher.h"

int main() {
    BinarySearcher searcher;
    int answer = searcher.numTrees(3);
    std::cout << answer << std::endl;
    return 0;
}
