class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


def has_cycle(head):
    slow = head
    fast = head

    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next

    return False


def main():
    head = Node(3)

    head.next = Node(2)
    head.next.next = Node(0)
    head.next.next.next = Node(-4)

    head.next.next.next.next = head.next

    print(has_cycle(head))


main()