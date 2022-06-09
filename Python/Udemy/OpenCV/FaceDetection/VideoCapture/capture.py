import cv2, time

face_cascade = cv2.CascadeClassifier("haarcascade_frontalface_default.xml")
video = cv2.VideoCapture(0)
a=0
while True:
    a+=1
    check, frame = video.read()
    faces = face_cascade.detectMultiScale(frame, 
    scaleFactor=1.1, 
    minNeighbors=5)
    # time.sleep(3)
    # gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    for x, y, w, h in faces:
        frame = cv2.rectangle(frame, (x,y), (x+w, y+h), (0,255,0), 3)
    cv2.imshow("capture", frame)
    # cv2.waitKey(1000)
    key=cv2.waitKey(1)
    if key==ord('q'):
        break

print(a)
video.release()

cv2.destroyAllWindows()