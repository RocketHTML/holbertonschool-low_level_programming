#!/usr/bin/python3

def island_perimeter(grid):
    '''returns perimeter of an island'''
    perimeter = 0
    for i in range(1, len(grid) - 1):
        for j in range(1, len (grid) - 1):
            liberties = 0
            liberties += 1 - grid[i - 1][j]
            liberties += 1 - grid[i][j - 1]
            liberties += 1 - grid[i + 1][j]
            liberties += 1 - grid[i][j + 1]
            perimeter += liberties
    return perimeter
