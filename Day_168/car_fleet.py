def main():
    position = [10,8,0,5,3]
    speed = [2,4,1,1,3]
    target = 12

    cars = []

    for i in range(len(position)):
        cars.append((position[i], speed[i]))

    cars.sort(reverse=True)

    stack = []

    for pos, spd in cars:
        time = (target - pos) / spd
        stack.append(time)

main()