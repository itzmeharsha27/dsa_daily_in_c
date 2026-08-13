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
    found = False

    while left <= right:
        mid = (left + right) // 2

        row = mid // cols
        col = mid % cols

        if matrix[row][col] == target:
            found = True
            break
        elif matrix[row][col] < target:
            left = mid + 1
        else:
            right = mid - 1

main()