# Binary Search

def main():
    nums = [-1,0,3,5,9,12]
    target = 9

    left = 0
    right = len(nums) - 1
    result = -1

    while left <= right:
        mid = (left + right) // 2

        if nums[mid] == target:
            result = mid
            break

        elif nums[mid] < target:
            left = mid + 1

        else:
            right = mid - 1

    print("Target =", target)
    print("Index =", result)


main()