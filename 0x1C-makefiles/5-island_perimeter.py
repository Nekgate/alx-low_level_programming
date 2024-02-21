#!/usr/bin/python3
""" Island Perimeter """


def island_perimeter(grid):
    perim = 0
    gr = []
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            gr.append(grid[i][j])
    for i in range(len(gr)):
        if i < len(gr) - 1 and i > 0:
            if gr[i] == 0 and gr[i + 1] == 1 or gr[i] == 0 and gr[i - 1] == 1:
                perim += 1
    if perim % 2 == 0:
        perim *= 2
    else:
        perim = (perim * 2) - 1
    return perim