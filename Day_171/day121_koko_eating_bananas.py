def main():
    piles = [3,6,7,11]
    h = 8

    left = 1
    right = max(piles)
    answer = right

    while left <= right:
        mid = (left + right) // 2

        hours = 0

        for pile in piles:
            hours += (pile + mid - 1) // mid

        if hours <= h:
            answer = mid
            right = mid - 1
        else:
            left = mid + 1

    print("Minimum Eating Speed =", answer)

main()