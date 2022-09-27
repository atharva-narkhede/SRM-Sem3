def oddsum(n):
    sum = 0
    for i in range(1, n+1, 2):
        sum += i
    print(sum)


n = int(input("Enter number: "))
oddsum(n)
