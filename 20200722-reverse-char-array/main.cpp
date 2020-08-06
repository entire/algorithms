#include <iostream>
#include <vector>
#include "ReverseString.h"

int main() {
    std::vector<char> stringArray {"h","e","l","l","o"};
    ReverseString reverser;
    reverser.reverseString(stringArray);
    // std::cout << answer << std::endl;
    return 0;
}
