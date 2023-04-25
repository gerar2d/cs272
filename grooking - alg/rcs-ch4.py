a = [3,2,6,4,5,12]

#4.1
def sum(list):
    if list == []:
        return 0
    else:
        return list[0] + sum(list[1:])
print(f"Sum of all the elements in the array: {sum(a)}")

#4.2
def count(list):
    if list == []:
        return 0
    else:
        return 1+ count(list[1:])
print(f"The Size of the array is: {count(a)}")

#4.3
def max(list):
    if len(list) == 2:
        return list[0] if list[0] > list[1] else list[1]
    sub_max = max(list[1:])
    return list[0] if list[0] > sub_max else sub_max
print(f"The maximum element in the array is: {max(a)}")