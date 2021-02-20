#!/usr/bin/python3
"""
island
"""


def island_perimeter(grid):
    """
    technical preparation
    """
    width = 0
    heigth = 0
    max_w = 0
    if not grid:
        return 0
    if (len(grid[0]) + len(grid)) > 100:
        return 0
    for i in grid:
        width = 0
        for x in i:
            if x == 1:
                width += 1

        if width != 0:
            heigth += 1
        if width == 0 and heigth != 0:
            break
        if max_w < width:
            max_w = width

    return ((max_w + heigth) * 2)
