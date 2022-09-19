num=int(input("Enter a number: "))
sum=0
temp=a=num
count=0
while(a>0):
    count+=1
    a=a//10

while(temp>0):
    digit=temp%10
    sum+=digit**count
    temp=temp//10
if(sum==num):
    print(num,"is an armstrong number")
else:
     print(num,"is not an armstrong number")