#!/usr/bin/Python3
"""Island perimeter module"""


def island_perimeter(grid):
    """Fucntion to return perimeter of island described in the grid"""
    count = 0
    height = len(grid) - 1
    width = len(grid[0]) - 1
    for i, arr in enumerate(grid):
        for j, el in enumerate(arr):
            if el == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    count += 1
                if j == 0 or grid[i][j - 1] != 1:
                    count += 1
                if j == width or grid[i][j + 1] != 1:
                    count += 1
                if i == height or grid[i + 1][j] != 1:
                    count += 1
    return count
