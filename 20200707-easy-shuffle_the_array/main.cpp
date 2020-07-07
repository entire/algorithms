#include <iostream>
#include <vector>
#include "Shuffler.h"

int main() {
    Shuffler shuffler;
    std::vector<int> nums = {1, 2, 3, 4, 5};
    std::vector<int> answer = shuffler.shuffle(nums);
    return 0;

}
