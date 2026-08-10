def main():
    heights = [2,1,5,6,2,3]

    heights.append(0)

    stack = []
    max_area = 0

    for i in range(len(heights)):
        while stack and heights[i] < heights[stack[-1]]:
            height = heights[stack.pop()]

            if stack:
                width = i - stack[-1] - 1
            else:
                width = i

            max_area = max(max_area, height * width)

        stack.append(i)

    print("Largest Rectangle Area =", max_area)

main()