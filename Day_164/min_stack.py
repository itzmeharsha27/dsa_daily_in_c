def main():
    stack = [-2, 0, -3]
    min_stack = [-2, -2, -3]

    stack.pop()
    min_stack.pop()

    print(stack[-1])
    print(min_stack[-1])

main()