from typing import *


class Status:
    def __init__(self, opponent_color, my_color, opponent_score, my_score):
        self.opponentColor = opponent_color
        self.myColor = my_color
        self.opponentScore = opponent_score
        self.myScore = my_score

        


def backtracking(matrix: List[List[int]], status: Status):
    return None