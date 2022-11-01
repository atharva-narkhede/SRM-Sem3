#Queue using Two Stacks Hackerrank Solution
#A queue is an abstract data type that maintains the order in which elements were added to it, allowing the oldest elements to be removed from the front and new elements to be added to the rear. This is called a First-In-First-Out (FIFO) data structure because the first element added to the queue (i.e., the one that has been waiting the longest) is always the first one to be removed.

old, new = [], []
for _ in range(int(input())):
    val = list(map(int,input().split()))
    if val[0] == 1:
        new.append(val[1])
    elif val[0] == 2:
        if not old :
            while new : old.append(new.pop())
        old.pop()
    else:
        print(old[-1] if old else new[0])
