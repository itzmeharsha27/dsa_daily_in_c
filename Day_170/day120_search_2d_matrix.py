def main():
    matrix = [
        [1,3,5,7],
        [10,11,16,20],
        [23,30,34,60]
    ]

    target = 3

    rows = len(matrix)
    cols = len(matrix[0])

    left = 0
    right = rows * cols - 1

main()