def main():
    data = {}

    key = "foo"
    value = "bar"
    timestamp = 1

    data[key] = [(timestamp, value)]

    data[key].append((4, "bar2"))

main()