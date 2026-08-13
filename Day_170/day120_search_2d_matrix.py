# Search a 2D Matrix using Binary Search

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

    # Binary search on the virtual 1D array
    while left <= right:

        mid = (left + right) // 2

        # Convert 1D index to 2D coordinates
        row = mid // cols
        col = mid % cols

        if matrix[row][col] == target:
            print("Target Found = True")
            return

        elif matrix[row][col] < target:
            left = mid + 1

        else:
            right = mid - 1

    print("Target Found = False")


main()