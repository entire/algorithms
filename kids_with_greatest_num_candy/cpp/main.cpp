#include <iostream>
#include <vector>
#include "GreatestCandy.h"

int main() {
    int extraCandies = 3;
    std::vector<int> candies = {2,3,5,1,3};
    GreatestCandy g_candy;
    std::vector<bool> result = g_candy.kidsWithCandies(candies, extraCandies);
    for (auto && element : result) {
        std::cout << element << std::endl;
    }
    return 0;

}
