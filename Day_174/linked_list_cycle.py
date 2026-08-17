# Linked List Cycle using Floyd's Algorithm


class Node:

    def __init__(self, data):
        self.data = data
        self.next = None


def has_cycle(head):

    slow = head
    fast = head

    # Move slow by one step
    # Move fast by two steps
    while fast and fast.next:

        slow = slow.next
        fast = fast.next.next

        # If both pointers meet, cycle exists
        if slow == fast:
            return True

    return False


def main():

    # Create linked list
    head = Node(3)
    second = Node(2)
    third = Node(0)
    fourth = Node(-4)

    head.next = second
    second.next = third
    third.next = fourth

    # Create cycle
    fourth.next = second

    result = has_cycle(head)

    print("Cycle Exists =", result)


main()