# Largest Rectangle in Histogram using Monotonic Stack

def main():
    heights = [2,1,5,6,2,3]

    # Add zero to process all remaining bars
    heights.append(0)

    stack = []
    max_area = 0

    # Traverse histogram
    for i in range(len(heights)):

        # Remove taller bars when current bar is smaller
        while stack and heights[i] < heights[stack[-1]]:

            height = heights[stack.pop()]

            # Calculate width
            if stack:
                width = i - stack[-1] - 1
            else:
                width = i

            # Calculate rectangle area
            area = height * width

            max_area = max(max_area, area)

        stack.append(i)

    print("Largest Rectangle Area =", max_area)


main()