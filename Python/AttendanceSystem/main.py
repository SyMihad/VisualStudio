import cv2
import numpy as np
import face_recognition
import os

path = 'Source'

images = []
names = []
myList = os.listdir(path)
print(myList)

for img in myList:
    tempImg = cv2.imread(f'{path}/{img}')
    images.append(tempImg)
    names.append(os.path.splitext(img)[0])

print(names)

def encodingFaces(faceList):
    encodingList = []
    for img in faceList:
        cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
        encode = face_recognition.face_encodings(img)[0]
        encodingList.append(encode)
    return encodingList

knownEncodeList = encodingFaces(images)

