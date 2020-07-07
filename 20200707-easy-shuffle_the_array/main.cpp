#include <iostream>
#include <vector>
#include "Shuffler.h"

int main() {
    Shuffler shuffler;
    std::vector<int> nums = {1,2,3,3,2,1};
    int index = 3;
    std::vector<int> answer = shuffler.shuffle(nums, index);
    shuffler.print(answer);
    return 0;

}
