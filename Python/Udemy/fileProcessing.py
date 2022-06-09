"""myfile = open("fruits.txt")
print(myfile.read())

with open("Files/vegetables.txt", "w") as myfile:
    myfile.write("Carrot\nTomattos\nPotato\n")

with open("Files/vegetables.txt", "a+") as readFile:
    readFile.write("\nBean")
    readFile.seek(0)
    contant = readFile.read()

print(contant)

import time
import os
while True:
    if os.path.exists("Files/test.txt"):
        with open("Files/test.txt") as myfile:
            contant = myfile.read()
            print(contant)
    else:
        print("File not found")

    time.sleep(5)"""



import time
import os
import pandas

while True:
    if os.path.exists("Files/today_temp.csv"):
            data = pandas.read_csv("Files/today_temp.csv")
            print(data.mean())
    else:
        print("File not found")

    time.sleep(5)