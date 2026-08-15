def get_value(data, key, timestamp):
    if key not in data:
        return ""

    result = ""

    for time, value in data[key]:
        if time <= timestamp:
            result = value

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