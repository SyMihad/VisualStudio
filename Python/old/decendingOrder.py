def reverseNumber(numb):
    numb.reverse()
    return numb
numbers = []
for i in range(1,6):
    numbers.append(int(input()))
#numbers.reverse()
print(reverseNumber(numbers))
#print(numbers)