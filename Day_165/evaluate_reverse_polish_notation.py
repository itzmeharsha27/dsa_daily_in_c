# Evaluate Reverse Polish Notation using Stack

def main():
    tokens = ["2", "1", "+", "3", "*"]

    stack = []

    # Process every token
    for token in tokens:

        # If token is a number, push it
        if token not in "+-*/":
            stack.append(int(token))

        else:
            # Pop the two operands
            b = stack.pop()
            a = stack.pop()

            if token == "+":
                stack.append(a + b)

            elif token == "-":
                stack.append(a - b)

            elif token == "*":
                stack.append(a * b)

            elif token == "/":
                # Truncate toward zero
                stack.append(int(a / b))

    print("Reverse Polish Notation Result =", stack[-1])


main()