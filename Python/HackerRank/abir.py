n = int(input())

listName = []

for i in range(n):
    listName.append(input())


for name in reversed(range(n)):
    print(listName[name])


