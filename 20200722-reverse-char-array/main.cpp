#include <iostream>
#include <vector>
#include "ReverseString.h"

int main() {
    std::vector<char> chars = {'a', 'b', 'c'};

    ReverseString reverser;
    reverser.reverseStringUsingSTL(chars);
    return 0;

}
