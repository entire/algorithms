import sys

def smallestDifference(arrayOne, arrayTwo):
    arrayOne.sort()
    arrayTwo.sort()
    firstIdx = 0
    secondIdx = 0
    smallestDiffSoFar = sys.maxsize
    currentDiff = sys.maxsize
    difference = []

    while (firstIdx < len(arrayOne) and secondIdx < len(arrayTwo)):
        firstNum = arrayOne[firstIdx]
        secondNum = arrayTwo[secondIdx]
        
        if firstNum < secondNum:
            currentDiff = secondNum - firstNum
            firstIdx += 1
        elif secondNum < firstNum:
            currentDiff = firstNum - secondNum
            secondIdx += 1
        else:
            difference = [firstNum, secondNum]
            return difference
        
        if smallestDiffSoFar > currentDiff:
            smallestDifference = currentDiff
            difference = [firstNum, secondNum]
    
    return difference

if __name__ == "__main__":
    arrayOne = [-1,5,10,20,28,3]
    arrayTwo = [26,134,135,15, 17]
    smallestDifference(arrayOne, arrayTwo)