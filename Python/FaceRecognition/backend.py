import cv2
from face_recognition.api import face_distance, face_encodings, face_locations
import numpy as np
import face_recognition

imgElon = face_recognition.load_image_file("images/elon-musk.jpg")
imgElon = cv2.cvtColor(imgElon, cv2.COLOR_BGR2RGB)

imgElon2 = face_recognition.load_image_file("images/elon-musk2.jpg")
imgElon2 = cv2.cvtColor(imgElon2, cv2.COLOR_BGR2RGB)

elonLoc1 = face_recognition.face_locations(imgElon)[0]
encodeElon1 = face_recognition.face_encodings(imgElon)[0]
cv2.rectangle(imgElon, (elonLoc1[3], elonLoc1[0]), (elonLoc1[1], elonLoc1[2]), (255,255,255), 2)

elonLoc2 = face_recognition.face_locations(imgElon2)[0]
encodeElon2 = face_recognition.face_encodings(imgElon2)[0]
cv2.rectangle(imgElon2, (elonLoc2[3], elonLoc2[0]), (elonLoc2[1], elonLoc2[2]), (255,255,255), 2)

result = face_recognition.compare_faces([encodeElon1], encodeElon2)
faceDis = face_recognition.face_distance([encodeElon1], encodeElon2)
print(result, faceDis)

cv2.putText(imgElon2, f'{result} {round(faceDis[0],3)}', (50,80), cv2.FONT_HERSHEY_SIMPLEX, 1.5, (0,0,255), 1)

cv2.imshow("Elon Musk 1", imgElon)
cv2.imshow("Elon Musk 2", imgElon2)

cv2.waitKey(0)
cv2.destroyAllWindows()