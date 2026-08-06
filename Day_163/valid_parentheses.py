def main():
    s = "()[]{}"

    stack = []

    pairs = {
        ')': '(',
        ']': '[',
        '}': '{'
    }

    valid = True

    for ch in s:
        if ch in "([{":
            stack.append(ch)
        else:
            if not stack or stack.pop() != pairs[ch]:
                valid = False
                break

main()