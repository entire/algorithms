#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>

std::vector<std::vector<int>>threeNumberSumOne(std::vector<int> array, int targetSum);

int main() {

    std::vector<int> numbers{ 12, 3, 1, 2, -6, 5, -8, 6};
    int targetSum = 0;
    std::cout << "begin" << std::endl;

    return 0;
}

std::vector<std::vector<int>>threeNumberSumOne(std::vector<int> array, int targetSum) {
    std::vector<std::vector<int>> answers {};
    // first sort it
    sort(array.begin(), array.end());

    for (int j=0; j<array.size() - 2; j++) {
        int left = j+1;
        int right = array.size() - 1;
        while (left < right) {
            int currentSum = array[j] + array[left] + array[right];
            if (currentSum == targetSum) {
                answers.push_back({array[j], array[left], array[right]});
                left += 1;
                right -= 1;
            } else if (currentSum < targetSum) {
                left += 1;
            } else if (currentSum > targetSum) {
                right -= 1;
            }
        }
    }
    return answers;
}