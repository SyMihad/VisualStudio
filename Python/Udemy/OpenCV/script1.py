import cv2

img = cv2.imread("pic/galaxy.jpg",0)

print(img.shape)

resized_image = cv2.resize(img, (int(img.shape[1]/2), int(img.shape[0]/2)))
cv2.imshow("Galaxy", resized_image)
cv2.imwrite("GralaxyResized.jpg", resized_image)
cv2.waitKey(0)
cv2.destroyAllWindows()