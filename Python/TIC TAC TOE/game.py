from player import Human_Player, Random_Computer_Player
import time
class Tic_Tac_Toe:
	def __init__(self):
		self.board = [' ' for i in range(9)]
		self.current_winner = None


	def print_board(self):
		print(' -------------')
		for i in range(9):
			if i in [2, 5, 8]:
				print(' | ' + self.board[i] + ' | ')
				print(' |---|---|---|')
			else:
				print(' | ' + self.board[i], end="")

	@staticmethod
	def print_board_numbers():
		print(' -------------')
		for i in range(9):
			if i in [2, 5, 8]:
				print(' | ' + str(i) + ' | ')
				print(' |---|---|---|')
			else:
				print(' | ' + str(i) , end="")

	def available_moves(self):
		moves = []
		for (i, spot) in enumerate(self.board):
			if spot == ' ':
				moves.append(i)

		return moves

	def empty_square(self):
		return ' ' in self.board


	def num_of_empt_square(self):
		return len(self.board.count(' '))

	def make_move(self, square, letter):
		if self.board[square] == ' ':
			self.board[square] = letter
			if self.winner(square, letter):
				self.current_winner = letter
			return True
		return False


	def winner(self, square, letter):
		row_index = square // 3
		row = self.board[row_index * 3 : (row_index + 1) * 3]
		if all([spot == letter for spot in row]):
			return True

		col_index = square % 3
		col = [self.board[col_index * 3] for i in range(3)]
		if all([spot == letter for spot in col]):
			return True

		# check diagonal
		if square % 2 == 0:
			diagonal_1 = [self.board[i] for i in [0, 4, 8]]
			if all([spot == letter for spot in diagonal_1]):
				return True
			diagonal_2 = [self.board[i] for i in [2, 4, 6]]
			if all([spot == letter for spot in diagonal_2]):
				return True
		return False


def play(game, x_player, o_player, print_game=True):
	if print_game:
		game.print_board_numbers()

	letter = 'X'

	while game.empty_square():
		if letter == 'O':
			square = o_player.get_move(game)
		else:
			square = x_player.get_move(game)
		if game.make_move(square, letter):
			if print_game:
				print(letter + f" makes a move to square {square}")
				game.print_board()
				print('-----****-----')	
			if game.current_winner:
				if print_game:
					print(letter + ' Wins !')
				return letter

			letter = 'O' if letter == 'X' else 'O'
		time.sleep(0.8)
	if print_game:
		print("Its a Tie")
			

if __name__ == '__main__':
	x_player = Human_Player('X')
	o_player = Random_Computer_Player('O')
	t = Tic_Tac_Toe()
	play(t, x_player, o_player, print_game=True)
