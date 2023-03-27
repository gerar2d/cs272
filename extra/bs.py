def BinSearch(list, item):
    low = 0
    high = len(list) -1

    while low <= high:
        mid = int(low + high) // 2
        guess = list[mid]
        
        if guess == item:
            return mid
        if guess > item:
            high = mid - 1
        else:
            low = mid + 1
    
    return None


a = [2,4,6,9,10]
x = 9



print(BinSearch(a,9))