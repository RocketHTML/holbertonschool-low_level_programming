#!/usr/bin/python3


def island_perimeter(grid):
    '''returns perimeter of an island'''

    def liberty(grid, i, j):
        '''returns the value at index i j'''
        if (i >= len(grid) or j >= len(grid[i])):
            return 0
        return grid[i][j]

    perimeter = 0
    for i in range(1, len(grid)):
        for j in range(1, len(grid[i])):
            if (grid[i][j] == 1):
                liberties = 0
                liberties += 1 - liberty(grid, i - 1, j)
                liberties += 1 - liberty(grid, i, j - 1)
                liberties += 1 - liberty(grid, i + 1, j)
                liberties += 1 - liberty(grid, i, j + 1)
                perimeter += liberties
    return perimeter
