board = ['7' for i in range(9)]

print(board)
print(' -------------')
for i in range(9):
	if i in [2, 5, 8]:
		print(' | ' + board[i] + ' | ')
		print(' |---|---|---|')
	else:
		print(' | ' + board[i], end="")




print(' -------------')
for i in range(9):
	if i in [2, 5, 8]:
		print(' | ' + str(i+1) + ' | ')
		print(' |---|---|---|')
	else:
		print(' | ' + str(i+1) , end="")



print('$' * 50)

for (i, spot) in enumerate(board):
	print(i, spot)