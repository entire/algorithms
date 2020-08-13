#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers {4, 1, 2, 1, 2};
    int res = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        res ^= numbers[i];
        std::cout << res << std::endl;

    }
    
    return 0;
}

    int