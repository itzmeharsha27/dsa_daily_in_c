# Min Stack using Two Stacks

def main():
    stack = [-2, 0, -3]
    min_stack = [-2, -2, -3]

    print("Minimum:", min_stack[-1])

    stack.pop()
    min_stack.pop()

    print("Top:", stack[-1])
    print("Minimum:", min_stack[-1])

main()