import numpy as np
import cv2 as cv

img_gray = cv.imread('input.jpg',cv.IMREAD_GRAYSCALE)//입력 이미지는 그레이스케일 이미지
img.gray=cv.medianBlur(img_Gray,5)
img_color = cv.cvtColor(img_gray,cv.COLOR_GRAY2BGR)

circles = cv.HoughCircles(img_gray,cv.HOUGH_GRADIENT,1,20,param1=50,param2=35,minRadius=0,maxRadius=0)//원을 검출하는 방법,현재는 HOUGH_GRADIENT만 사용가능
//param1은 높은 쓰레솔드 값, 2는accumulatoy 쓰레솔드값.가장 큰 acumpulator 값의 원이 먼저검출됨
circles = np.unit16(np.around(circles))

for c in circles[0,:]:
	center = (c[0],c[1])
	radius = c[2]

	cv.circle(img_color,center,radius,(0,255,0),2)//발견한 원의 벡터,각 벡터는 3개또는 4개의 원소를 가짐

	cv.circle(img_color,center,2,(0,0,255),3)

cv.imshow('detected circles',img_color)
cv.waitKey(0)
cv.destroyAllWindows()
