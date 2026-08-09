def main():
    temperatures = [73,74,75,71,69,72,76,73]

    n = len(temperatures)
    answer = [0] * n
    stack = []

    for i in range(n):
        while stack and temperatures[i] > temperatures[stack[-1]]:
            previous = stack.pop()
            answer[previous] = i - previous

        stack.append(i)

    print("Daily Temperatures:", answer)

main()