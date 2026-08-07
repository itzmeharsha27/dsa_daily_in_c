# Min Stack using Two Stacks

def main():
    stack = []
    min_stack = []

    # Push -2
    stack.append(-2)
    min_stack.append(-2)

    # Push 0
    stack.append(0)
    min_stack.append(min(min_stack[-1], 0))

    # Push -3
    stack.append(-3)
    min_stack.append(min(min_stack[-1], -3))

    print("Minimum:", min_stack[-1])

    # Pop
    stack.pop()
    min_stack.pop()

    print("Top:", stack[-1])
    print("Minimum:", min_stack[-1])

main()