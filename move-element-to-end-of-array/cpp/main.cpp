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
            std::cout << "i is at: " << i << std::endl;
            std::cout << "element at index[" << i <<  "] is " << array[i] << std::endl;
            std::cout << "its going to move to the end" << std::endl;
            std::cout << "j is at: " << j << std::endl;
            std::cout << "element at index[" << j <<  "] is " << array[j] << std::endl;
            std::cout << "swap between " << array[i] << " and " << array[j] << std::endl;
            std::swap(array[i], array[j]);
            std::cout << std::endl;
        } 
        i++;
    }
    return array;
}
