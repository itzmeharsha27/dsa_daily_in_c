class TimeMap:

    def __init__(self):
        self.data = {}

    def set(self, key, value, timestamp):
        if key not in self.data:
            self.data[key] = []

        self.data[key].append((timestamp, value))

    def get(self, key, timestamp):
        if key not in self.data:
            return ""

        left = 0
        right = len(self.data[key]) - 1
        result = ""

        while left <= right:
            mid = (left + right) // 2

            if self.data[key][mid][0] <= timestamp:
                result = self.data[key][mid][1]
                left = mid + 1
            else:
                right = mid - 1

        return result


def main():
    store = TimeMap()

    store.set("foo", "bar", 1)
    store.set("foo", "bar2", 4)

    print(store.get("foo", 3))


main()