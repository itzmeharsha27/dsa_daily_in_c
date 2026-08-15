def get_value(data, key, timestamp):
    if key not in data:
        return ""

    result = ""

    for time, value in data[key]:
        if time <= timestamp:
            result = value

    return result


def main():
    data = {}

    data["foo"] = [(1, "bar")]
    data["foo"].append((4, "bar2"))

    print(get_value(data, "foo", 1))
    print(get_value(data, "foo", 3))
    print(get_value(data, "foo", 4))
    print(get_value(data, "foo", 5))


main()