#Alexa has two stacks of non-negative integers, stack  and stack  where index  denotes the top of the stack. Alexa challenges Nick to play the following game: Hackerrank

def brute(a,b):
    ans = 0
    a = [0]+a
    b = [0]+b
    for i in range(len(a)):
        for j in range(len(b)):
            sa = sum(a[:i+1])
            sb = sum(b[:j+1])
            if sa+sb > x:
                break
            ans = max(ans, i+j)

    return ans

def solve(a,b):
    total = 0
    i = len(a)
    ans = i
    j = 1
    for i in range(len(a)):
        total += a[i]
        if total > x:
            ans = i
            break

    ans_total = x + 1
    total = sum(a[:i])
    while (total <= x and i > 0) or j < len(b):
        if total < x:
            total += b[j - 1]
            j += 1
        elif total > x:
            total -= a[i - 1]
            i -= 1
        else:
            total -= a[i - 1]
            i -= 1
            total += b[j - 1]
            j += 1

        if i < 1 and total > x:
            break
        ans = max(ans, i + j - 2)
        ans_total = min(total, ans_total)

    return ans if ans_total <= x else ans - 1

for _ in range(int(input())):
    n, m, x = map(int, input().split())
    a = [int(x) for x in input().split()]
    b = [int(x) for x in input().split()]
    _sum_a, _sum_b = sum(a), sum(b)
    if _sum_a + _sum_b <= x:
        print(n+m)
    elif n <= 200 and m <= 200:
        print(brute(a,b))
    else:
        ans = solve(a,b) if _sum_a < _sum_b else solve(b,a)
        print(ans)
