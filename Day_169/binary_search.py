# Binary Search using Divide and Conquer

def main():
    nums = [-1,0,3,5,9,12]
    target = 9

    left = 0
    right = len(nums) - 1
    result = -1

    # Search while valid range exists
    while left <= right:

        # Find middle index
        mid = (left + right) // 2

        if nums[mid] == target:
            result = mid
            break

        # Search right half
        elif nums[mid] < target:
            left = mid + 1

        # Search left half
        else:
            right = mid - 1

    print("Binary Search Index =", result)


main()