#Delete duplicate-value nodes from a sorted linked list Hackerrank Solution


def removeDuplicates(head):
    ans=None
    s=set()
    ansl=SinglyLinkedList()
    while head:
        if head.data not in s:
            s.add(head.data)
            ansl.insert_node(head.data)
            head=head.next
        else:
            head=head.next
    return ansl.head
