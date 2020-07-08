#include <vector>
#include <iostream>
#include <algorithm>

class GreatestCandy {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        int highest = *std::max_element(candies.begin(),candies.end());
        std::vector<bool> results;
        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] + extraCandies >= highest) {
                results.push_back(true);
            } else {
                results.push_back(false);
            }
        }

        return results;
    }
};