#Down to Zero II hackerrank solution

#You are given  queries. Each query consists of a single number . You can perform any of the  operations on  in each move:

#1: If we take 2 integers  and  where , , then we can change 

#2: Decrease the value of  by .

#Determine the minimum number of moves required to reduce the value of  to .

import collections
lim = 10**6+1
dist = [0]*lim
active = collections.deque()
active.append(0)
while active:
   n = active.popleft()
   d = dist[n]+1
   x = n + 1
   if x < lim and dist[x] == 0:
      dist[x] = d
      active.append(x)
   for m in range(2,n+1):
      x = m * n
      if x >= lim: break
      if dist[x] == 0:
         dist[x] = d
         active.append(x)
Q = int(input())
for q in range(Q):
   N = int(input())
   print(dist[N])
