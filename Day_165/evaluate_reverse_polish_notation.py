def main():
    tokens = ["2", "1", "+", "3", "*"]
    stack = []

    for token in tokens:
        if token not in "+-*/":
            stack.append(int(token))
        else:
            b = stack.pop()
            a = stack.pop()

            if token == "+":
                stack.append(a + b)
            elif token == "-":
                stack.append(a - b)
            elif token == "*":
                stack.append(a * b)
            elif token == "/":
                stack.append(int(a / b))

    print("Result =", stack[-1])

main()