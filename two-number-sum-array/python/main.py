
def twoSumWithSet(array, targetSum):
    for i, num in enumerate(array):
        for j, num in enumerate(array):
            sum = array[i] + array[j]
            if targetSum == sum and i != j:
                return [array[i], array[j]]
    return [] 

def twoSumWithHashMap(array, targetSum):
    hashMap = {}
    for num in array:
        potentialMatch = targetSum - num
        if not potentialMatch in hashMap.values():
            return [potentialMatch, num]
        else:
            hashMap[num] = num
    return []

if __name__ == "__main__":
    array = [3,5,-4,8,11,1,-1,6]
    array2 = [4, 6, 1, -3]
    targetSum = 10
    targetSum2 = 3
    
    sum = twoSumWithSet(array, targetSum)
    print(sum)
    sum = twoSumWithHashMap(array2, targetSum2)
    print(sum)