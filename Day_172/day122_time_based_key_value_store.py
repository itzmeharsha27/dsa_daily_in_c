def main():
    data = {}

    data["foo"] = [
        (1, "bar"),
        (4, "bar2")
    ]

    timestamp = 3

    result = ""

    for time, value in data["foo"]:
        if time <= timestamp:
            result = value

    print(result)

main()