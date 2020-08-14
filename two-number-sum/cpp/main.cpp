#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>

std::vector<int>twoNumberSumWithUnorderedMap(std::vector<int> array, int targetSum);
std::vector<int>twoNumberSumWithSet(std::vector<int> array, int targetSum);

int main() {

    std::vector<int> numbers{ 3, 5, -4, 8, 11, 1, -1, 6 };
    int targetSum = 10;
    std::vector<int> summed = twoNumberSumWithUnorderedMap(numbers, targetSum);

    return 0;
}

std::vector<int> twoNumberSumWithUnorderedMap(std::vector<int> array, int targetSum) {
    std::unordered_set<int> hashMap;
    // go through numbers
    for (int num: array) {
        int potentialMatch  = targetSum - num;
        std::cout << potentialMatch << std::endl;
        if (hashMap.find(potentialMatch) != hashMap.end()) {
            return std::vector<int>{potentialMatch, num};
        } else {
            hashMap.insert(num);
        }
    }
    return {};
}

std::vector<int> twoNumberSumWithSet(std::vector<int> array, int targetSum) {
    // Write your code here.
    std::set<int> sumSet; 
    std::vector<int> sumVector;
    for (int i=0; i < array.size(); ++i) {
    	for (int j=0; j < array.size(); ++j) {
    		int sum = array[i] + array[j];
    		if (targetSum == sum && i != j) {
    			sumSet.insert(array[j]);
    			sumSet.insert(array[i]);
    		}
    	}
    }
    sumVector.assign(sumSet.begin(), sumSet.end());
    return sumVector;
}
