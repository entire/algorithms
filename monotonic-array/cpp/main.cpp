#include <iostream>
#include <vector>
#include <string>

bool isMonotonic(std::vector<int> array);

int main() {
    std::vector<int> array = {-1, -5, -10, -1100, -1100, -1101, -1102, -9001};
    if (isMonotonic(array)) {
        std::cout << "it is monotonic!" << std::endl;
    } else {
        std::cout << "it is not monotonic!" << std::endl;
    }
    return 0;
}

bool isMonotonic(std::vector<int> array) {
    return false;
}
