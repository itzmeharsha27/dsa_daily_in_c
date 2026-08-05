# 4Sum

def main():
    nums = [2,2,2,2,2]
    target = 8

    nums.sort()
    n = len(nums)

    for i in range(n-3):
        for j in range(i+1, n-2):
            left = j + 1
            right = n - 1

            while left < right:
                total = nums[i] + nums[j] + nums[left] + nums[right]

                if total == target:
                    print(nums[i], nums[j], nums[left], nums[right])
                    break
                elif total < target:
                    left += 1
                else:
                    right -= 1

main()