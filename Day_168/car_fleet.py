# Car Fleet using Sorting and Stack

def main():
    position = [10,8,0,5,3]
    speed = [2,4,1,1,3]
    target = 12

    cars = []

    # Create position-speed pairs
    for i in range(len(position)):
        cars.append((position[i], speed[i]))

    # Process cars from closest to target
    cars.sort(reverse=True)

    stack = []

    # Calculate arrival time for each car
    for pos, spd in cars:
        time = (target - pos) / spd

        # A slower fleet ahead cannot be caught
        if not stack or time > stack[-1]:
            stack.append(time)

    print("Number of Car Fleets =", len(stack))


main()