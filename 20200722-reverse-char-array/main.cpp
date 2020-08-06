#include <iostream>
#include <vector>
#include "ReverseString.h"
#include <string>

int main() {
    std::vector<char> chars = {'a', 'b', 'c'};
    std::string greetingString1 = "hello everyone";
    std::string greetingString2 = "again, hello everyone";

    ReverseString reverser;
    reverser.reverseStringWithChars(chars);
    reverser.reverseStringWithString(greetingString1);
    reverser.reverseStringBySwap(greetingString2);
    return 0;

}
