def get_value(data, key, timestamp):
    if key not in data:
        return ""

    left = 0
    right = len(data[key]) - 1
    result = ""

    while left <= right:
        mid = (left + right) // 2

        if data[key][mid][0] <= timestamp:
            result = data[key][mid][1]
            left = mid + 1
        else:
            right = mid - 1

    return result


def main():
    data = {
        "foo": [
            (1, "bar"),
            (4, "bar2")
        ]
    }

    print(get_value(data, "foo", 3))


main()