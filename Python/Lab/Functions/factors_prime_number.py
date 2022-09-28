def factors(x):
    a = 0
    print("The factors of", x, "are ", end="")
    for i in range(1, x + 1):
        if x % i == 0:
            print(i, " ", end="")
            a += 1
    print("")
    if a == 2:
        print(x, "is Prime Number")
    else:
        print(x, "is not a Prime Number")


num = int(input("Enter a number: "))

factors(num)
