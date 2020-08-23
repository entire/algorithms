
def threeNumberSum(array, targetSum):
    array.sort()

    triplets = []
    for i in range(len(array) - 2):
        left = i + 1
        right = len(array) - 1
        print(f"i: {i}, left: {left}, right: {right}")
        while left < right:
            currentSum = array[i] + array[left] + array[right]
            if currentSum == targetSum:
                triplets.append([array[i], array[left], array[right]])
                left += 1
                right -= 1
            elif currentSum < targetSum:
                left += 1
            elif currentSum > targetSum:
                right -= 1
    return triplets

if __name__ == "__main__":
    array = [12, 3, 1, 2, -6, 5, -8, 6]
    targetSum = 0
    triplets = threeNumberSum(array, targetSum)
    print(triplets)