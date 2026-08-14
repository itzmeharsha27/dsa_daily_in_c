# Koko Eating Bananas using Binary Search

def main():
    piles = [3,6,7,11]
    h = 8

    # Minimum possible speed
    left = 1

    # Maximum possible speed
    right = max(piles)

    answer = right

    # Binary search for minimum valid speed
    while left <= right:

        speed = (left + right) // 2

        hours = 0

        # Calculate hours required at this speed
        for pile in piles:
            hours += (pile + speed - 1) // speed

        # Speed is sufficient
        if hours <= h:
            answer = speed
            right = speed - 1

        # Speed is too slow
        else:
            left = speed + 1

    print("Minimum Eating Speed =", answer)


main()