n = 5
k = 2*n-2
for row in range(0,n):
	for space in range(0,k):
		print(end=' ')
	k = k - 2
	for colm in range(0,row+1):
		print('* ',end='')

	print ("\t")