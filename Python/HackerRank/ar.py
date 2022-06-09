speed = float(input("Enter shutter speed:"))
interval = int(input("Enter interval number: "))
numOfPic = int(input("Enter total number of picture:"))

startDeg = int(input("Enter number of Start Degree:"))
endDeg = int(input("Enter ending Degree:"))

totalTime = (speed*numOfPic) + (interval*numOfPic)

print("Total minite= " + str(totalTime/60))

print("Per degree change=" + str(totalTime/(endDeg-startDeg)))