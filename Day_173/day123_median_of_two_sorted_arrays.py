# Median of Two Sorted Arrays

def main():
    nums1 = [1,3]
    nums2 = [2]

    merged = []

    i = 0
    j = 0

    # Merge both sorted arrays
    while i < len(nums1) and j < len(nums2):

        if nums1[i] <= nums2[j]:
            merged.append(nums1[i])
            i += 1

        else:
            merged.append(nums2[j])
            j += 1

    # Add remaining elements
    merged.extend(nums1[i:])
    merged.extend(nums2[j:])

    n = len(merged)

    # Calculate median
    if n % 2 == 1:
        median = merged[n // 2]

    else:
        median = (merged[n // 2 - 1] + merged[n // 2]) / 2

    print("Median of Two Sorted Arrays =", median)


main()