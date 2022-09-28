def fibonacci_recursion(n):
    if n <= 1:
        return n
    else:
        return (fibonacci_recursion(n-1) + fibonacci_recursion(n-2))


k = int(input("Enter number of terms: "))
print("Fibonacci Series: ", end="")
for i in range(k):
    print(fibonacci_recursion(i), " ", end="")
