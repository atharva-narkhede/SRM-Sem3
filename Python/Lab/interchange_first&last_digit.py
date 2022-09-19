print("Enter the Number: ")
num = int(input())
rev = 0
noOfDigit = 0
temp = num
while temp > 0:
    temp = int(temp/10)
    noOfDigit = noOfDigit+1
if noOfDigit < 2:
    print("\nIt is a Single-digit Number!")
elif noOfDigit == 2:
    temp = num
    while temp > 0:
        rem = temp % 10
        rev = (rev*10)+rem
        temp = int(temp/10)
    print("\nFirst and Last (Second) Digit Interchanged Successfully!")
    print("\nNew Number: ")
    print(rev)
else:
    temp = num
    while temp > 0:
        rem = temp % 10
        rev = (rev*10)+rem
        temp = int(temp/10)
    revNum = rev
    rev = 0
    temp = num
    noOfDigitTemp = noOfDigit
    while temp > 0:
        remTemp = revNum % 10
        if noOfDigitTemp == noOfDigit:
            rem = temp % 10
            rev = (rev*10)+rem
        elif noOfDigitTemp == 1:
            rem = temp % 10
            rev = (rev*10)+rem
        else:
            rev = (rev*10)+remTemp
        temp = int(temp/10)
        revNum = int(revNum/10)
        noOfDigitTemp = noOfDigitTemp-1
    print("\nFirst and Last Digit Interchanged Successfully!")
    print("\nNew Number: ")
    print(rev)
