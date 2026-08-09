# Daily Temperatures using Monotonic Stack

def main():
    temperatures = [73,74,75,71,69,72,76,73]

    n = len(temperatures)

    # Result array
    answer = [0] * n

    # Stack stores indices
    stack = []

    # Traverse temperatures
    for i in range(n):

        # Find a warmer temperature
        while stack and temperatures[i] > temperatures[stack[-1]]:
            previous = stack.pop()

            answer[previous] = i - previous

        # Store current index
        stack.append(i)

    print("Daily Temperatures =", answer)


main()