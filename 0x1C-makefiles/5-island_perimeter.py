#!/usr/bin/python3
def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    perimeter = 0
    for row_index in range(len(grid)):
        for column_index in range(len(grid[row_index])):
            if grid[row_index][column_index] == 1:
                if row_index == 0 \
                        or (row_index != 0
                            and grid[row_index-1][column_index] == 0):
                    perimeter += 1
                if row_index == len(grid)-1 \
                        or (row_index < len(grid)-1
                            and grid[row_index+1][column_index] == 0):
                    perimeter += 1
                if column_index == 0 \
                        or column_index != 0 and \
                        grid[row_index][column_index-1] == 0:
                    perimeter += 1
                if row_index == len(grid[row_index])-1 \
                        or column_index < len(grid[row_index])-1 \
                        and grid[row_index][column_index+1] == 0:
                    perimeter += 1
    return perimeter
