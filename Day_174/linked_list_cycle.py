# Linked List Cycle
# Floyd's Slow and Fast Pointer Technique


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

        if slow == fast:
            return True

    return False


def main():

    head = Node(3)
    second = Node(2)
    third = Node(0)
    fourth = Node(-4)

    head.next = second
    second.next = third
    third.next = fourth

    # Last node points back to second node
    fourth.next = second

    result = has_cycle(head)

    print("Linked List Contains Cycle:", result)


main()