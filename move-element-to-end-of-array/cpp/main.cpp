#include <iostream>
#include <vector>
#include <string>

std::vector<int> moveElementToEnd(std::vector<int> &array, int toMove);
void printArray(std::vector<int> &array);

int main() {
    std::vector<int> array = {5,5,5,5,1,2,3,4,6,5,7,8,9,10,11,12};
    int targetToMove = 5;
    moveElementToEnd(array, targetToMove);
    printArray(array);

    return 0;
}

void printArray(std::vector<int> &array) {
    for (auto& elem : array) {
        std::cout << elem << ", ";
    }
    std::cout << std::endl;
}

std::vector<int> moveElementToEnd(std::vector<int> &array, int toMove) {
    int i = 0;
    int j = array.size() - 1; 
    while (i < j) {
        while (i < j && array[j] == toMove) {
            j--;
        }
        if (array[i] == toMove) {
            std::swap(array[i], array[j]);
        } 
        i++;
    }
    return array;
}
