import math
import random


class Player():
	def __init__(self, letter):
		# letter can be X or O
		self.letter = letter


	# we want all players to get their next move given a game
	def get_move(self, game):
		pass



class Random_Computer_Player(Player):
	def __init__(self, letter):
		super().__init__(letter)


	def get_move(self, game):
		square = random.choice(game.available_moves())
		return square


class Human_Player(Player):
	def __init__(self, letter):
		super().__init__(letter)


	def get_move(self, game):
		valid_sqauare = False
		val = None

		while not valid_sqauare:
			square = input(self.letter + "'s turn, Input Move (0-9) : ")
			try:
				val = int(square)
				if val not in game.available_moves():
					raise ValueError
				valid_sqauare = True
			except ValueError:
				print("Invalid Square. Try again")

		return val