#include <vector>
#include <iterator>
#include <algorithm>

class ReverseString
{
public:
    void reverseStringWithChars(std::vector<char>& s) {
        std::reverse(s.begin(), s.end());
        for (auto i = s.begin(); i != s.end(); ++i)
            std::cout << *i;
        std::cout << std::endl;
    }

    void reverseStringWithString(std::string& s) {
        std::reverse(s.begin(), s.end());
        printString(s);
   }

    void reverseStringBySwap(std::string& s) {
        // length of string
        int len = s.length();
        // second to last of len
        int n = len - 1;
        for (int i=0; i<(len/2); ++i) {
            std::swap(s[i], s[n]);
            // keep decreasing n until we meet i in the middle
            n = n-1;
        }
        printString(s);
    }

    void printString(std::string& s) {
        std::cout << s << std::endl;
    }
};

