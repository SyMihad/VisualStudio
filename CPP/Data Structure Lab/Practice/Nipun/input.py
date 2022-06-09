total = []

while True:
    temp = input()
    if temp==".":
        break
    total.append(temp)

for a in total:
    if a=="Hajj":
        print("Hajj-A-Akbar")
    elif a=="Umrah":
        print("Hajj-A-Aksar")