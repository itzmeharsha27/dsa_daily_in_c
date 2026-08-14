# Koko Eating Bananas

def main():
    piles = [3,6,7,11]
    h = 8

    left = 1
    right = max(piles)
    answer = right

    while left <= right:

        speed = (left + right) // 2

        hours = 0

        for pile in piles:
            hours += (pile + speed - 1) // speed

        if hours <= h:
            answer = speed
            right = speed - 1
        else:
            left = speed + 1

    print("Piles:", piles)
    print("Hours:", h)
    print("Minimum Speed:", answer)

main()