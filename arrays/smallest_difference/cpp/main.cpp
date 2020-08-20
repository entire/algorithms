#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <cstdlib> 
#include<bits/stdc++.h> 

std::vector<int> smallestDifference(std::vector<int> arrayOne, std::vector<int> arrayTwo);

int main() {
    std::vector<int> arrayOne = {10, 0, 20, 25};
    std::vector<int> arrayTwo = {1005, 1006, 1014, 1032};
    // std::vector<int> arrayOne = {10, 1000};
    // std::vector<int> arrayTwo = {-1441, -124, -25, 1014, 1500, 660, 410, 245, 530};
    // std::vector<int> arrayOne = {-1, 5, 10, 20, 28, 3};
    // std::vector<int> arrayTwo = {26, 134, 135, 15, 17};
    std::vector<int> difference = smallestDifference(arrayOne, arrayTwo);
    std::cout << "difference size: " << difference.size() << std::endl;
    for (int i=0; i<difference.size(); i++) {
        std::cout << difference[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

std::vector<int> smallestDifference(std::vector<int> arrayOne, std::vector<int> arrayTwo) {
    std::sort(arrayOne.begin(), arrayOne.end());
    std::sort(arrayTwo.begin(), arrayTwo.end());
    int firstIndex = 0;
    int secondIndex = 0;
    int smallestDiffSoFar = INT_MAX; // make this really large so the first time diff
	  int currentDiff = INT_MAX;
    std::vector<int> difference;

    while(firstIndex < arrayOne.size() && secondIndex < arrayTwo.size()) {
        int firstNum = arrayOne[firstIndex];
        int secondNum = arrayTwo[secondIndex];
			std::cout << "firstIndex: " << firstIndex + 1<< " out of " << arrayOne.size() << " -> " << firstNum << std::endl;
			std::cout << "secondIndex: " << secondIndex +1 << " out of " << arrayTwo.size() << " -> " << secondNum << std::endl;
						
        // if diff is 0, that is the answer
        if (firstNum < secondNum) {
            std::cout << firstNum << " is less than " << secondNum << std::endl;
            // move pointer right on second array to next index
			currentDiff = secondNum - firstNum;
            firstIndex++;
        } else if (secondNum < firstNum) { 
            std::cout << secondNum << " is less than " << firstNum << std::endl;
            // move pointer right on first array to next index
			currentDiff = firstNum - secondNum;
            secondIndex++;
        } else {
			difference = std::vector<int>{firstNum, secondNum};
			std::cout << "end 1: difference size: " << difference.size() << std::endl;
			for (int i=0; i<difference.size(); i++) {
					std::cout << difference[i] << " ";
			}
			std::cout << std::endl;
			return difference;
	    }

        std::cout << "smallestDiffSoFar: " << smallestDiffSoFar << std::endl;
        std::cout << "currentDiff: " << currentDiff << std::endl;
        // keep track of smallest diff, and save it if its lower than last diff
        if (smallestDiffSoFar > currentDiff) {
            smallestDiffSoFar = currentDiff;
            difference = {firstNum, secondNum};
        }
		std::cout << std::endl;
    }
	return difference;
}