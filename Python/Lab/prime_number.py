print("Prime numbers between 1 and 20 are:")

for i in range(2,100):
  
       for j in range(2, i):
           if (i % j) == 0:
               break
       else:
           print(i)