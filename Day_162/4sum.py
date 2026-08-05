def main():
    nums = [1,0,-1,0,-2,2]
    target = 0

    nums.sort()
    n = len(nums)

    for i in range(n-3):
        for j in range(i+1, n-2):
            left = j + 1
            right = n - 1

main()