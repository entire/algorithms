#include <vector>
#include <iterator>
#include <algorithm>

class ReverseString
{
public:
    void reverseStringUsingSTL(std::vector<char>& s) {
        std::reverse(s.begin(), s.end());
        for (auto& elem : s) {
            std::cout << elem << " " << std::endl;
        }
    }
};

