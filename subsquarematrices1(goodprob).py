class Solution:
    def countSquares(self, matrix: List[List[int]]) -> int:
        count = 0
        nb_row = len(matrix)
        nb_col = len(matrix[0])
        for i in range(nb_row):
            count += matrix[i][0]
        for j in range(1, nb_col):
            count += matrix[0][j]
        for i in range(1, nb_row):
            for j in range(1, nb_col):
                if matrix[i][j] == 1:
                    matrix[i][j] = min(matrix[i-1][j-1], matrix[i-1][j], matrix[i][j-1])+1
                    count += matrix[i][j]
        return count
