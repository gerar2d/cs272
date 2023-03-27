def binarySearch(list, item):
    low = 0
    high = len(list) - 1

    while True:
        mid = int(low + high) // 2
        guess = list[mid]

        if guess == item:
            return mid
        if guess > item:
            high = mid -1
        else:
            low = mid+1
    return None

a = [2,5,7,12,60,80]

print(binarySearch(a, 60))