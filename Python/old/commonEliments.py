array1 = [2,3,4,6,3,7,10]
array2 = [1,3,5,9,6]
array3 = []
for i in range(len(array1)):
    for j in range(len(array2)):
        if array1[i] == array2[j]:
            array3.append(array1[i])
print(array3)