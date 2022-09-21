#!/usr/bin/python3

"""
This module calculates the perimeter of an island
"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid
    Args:
         grid (list) = list of integers
    """

    width = len(grid[0])
    height = len(grid)
    edges = 0
    totalSize = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                totalSize += 1
                # Boundary check
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return ((totalSize * 4) - (edges * 2))
