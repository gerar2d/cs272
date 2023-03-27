n = 5

for row in range(1, 4):
    for col in range(2,7):
        if (4-row)<col and col<(row+4):
            print('*', end='')
        else:
            print(" ", end='')
    print("\t")

for row in range(1, 3):
    for col in range(2,7):
        if (row+1<col) and col<(7-row):
            print('*', end='')
        else:
            print(" ", end='')
    print("\t")