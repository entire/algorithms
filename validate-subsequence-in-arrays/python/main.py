def isValidSubsequence(array, sequence):
    # Write your code here.
    index = 0
    for num in array:
        print(f"index: {index}")
        print(f"num: {num}")
        if len(sequence) == index:
            break
        if sequence[index] == num:
            index += 1
    return len(sequence) == index


if __name__ == "__main__":

    data = {
        "array": [5, 1, 22, 25, 6, -1, 8, 10], 
        "sequence": [25]
    }

    data2 = {
        "array": [1, 1, 1, 1, 1], 
        "sequence": [1, 1, 1]
    }
    
    print(isValidSubsequence(data["array"],data["sequence"]))
    print(isValidSubsequence(data2["array"],data2["sequence"]))