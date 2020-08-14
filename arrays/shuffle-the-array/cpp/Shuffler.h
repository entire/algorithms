#include <vector>
#include <iostream>

class Shuffler {
private:
    // std::vector<int> nums;
public:
    std::vector<int> shuffle(std::vector<int>& nums, int n) {
        std::vector<int> shuffled;
        for (int i = 0; i < n; i++) {
            shuffled.push_back(nums[i]);
            shuffled.push_back(nums[i+n]);
        }
        return shuffled;
    }

    void print(std::vector<int>& nums) {
        for (auto & element : nums) {
            std::cout << element << std::endl;
        }
    }
};