#Dothraki are planning an attack to usurp King Robert's throne.
#King Robert learns of this conspiracy from Raven and plans to lock the single door through which the enemy can enter his kingdom.

from typing import Counter


def gameOfThrones(s):
    s = sorted(s)
    c = Counter(s)
    odd = 0

    for v in c.values():
        if odd > 1:
            return "NO"

        if v % 2 == 1:
            odd += 1

    return "YES"

if __name__ == "__main__":
    s = input().strip()

    result = gameOfThrones(s)

    print(result)
