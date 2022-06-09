list1 = []
list2 = []

for i in range(1,4):
    list1.append(int(input()))
for i in range(1,4):
    list2.append(int(input()))
#print(list1 + list2)
list3 = list1 + list2
list3.reverse()
print(list3)