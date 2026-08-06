# Valid Parentheses using Stack

def main():
    s = "()[]{}"

    stack = []

    pairs = {
        ')': '(',
        ']': '[',
        '}': '{'
    }

    valid = True

    # Traverse the string
    for ch in s:

        if ch in "([{":
            stack.append(ch)

        else:
            if not stack or stack.pop() != pairs[ch]:
                valid = False
                break

    # Stack should be empty
    if stack:
        valid = False

    print("Valid Parentheses:", valid)


main()