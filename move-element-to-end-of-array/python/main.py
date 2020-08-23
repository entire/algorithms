import copy

def moveElementToEndUsingLambda(array, toMove):
    predefined_list = [toMove]
    function = lambda x: x in predefined_list
    print(function)
    array = sorted(array, key=function)
    print(array)
    return array

if __name__ == "__main__":
    data = {"array": [5, 5, 5, 5, 5, 5, 1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12], "toMove": 5}
    moveElementToEndUsingLambda(data["array"], data["toMove"])
