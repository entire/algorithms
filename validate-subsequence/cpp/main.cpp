#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>

bool isValidSubsequence(std::vector<int> array, std::vector<int> sequence);

int main() {
    std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
    std::vector<int> sequence = {1, 6, -1, 10};
    bool isValid = isValidSubsequence(array, sequence);
    std::cout << "isValid: " << isValid << std::endl;

    return 0;
}

bool isValidSubsequence(std::vector<int> array, std::vector<int> sequence) {
    // O(n) time | O(1) space, where n is the length of the array
    // reason: because it's just a for loop that you go through n times
	int index = 0;
	for (auto& num : array) {
        if (sequence.size() == index) {
            break;
        }
		if (sequence[index] == num)  {
			index++;
		}
	}
	return index == sequence.size();
}
