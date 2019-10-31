import numpy as np
import cv2
import matplotlib.pyplot as plt

def canny():
	img=cv2.imread('images/eran.jpg',cv2.IMREAD_GRAYSCALE)

	edge1=cv2.Canny(img,50,200)//cv2.Canny 함수는 Canny Edge Detection 알고리즘을 구현한 함수다. 이 함수의 인자는 다음과 같다. img:Canny Edge Detection을 수행할 원본 Grayscale 이미지. 50:minimum thresholding value. 200:Maximum thresholding value.
	edge2=cv2.Canny(img,100,200)//edge2는 minVal,maxVal을 각각 100,200으로
	edge3=cv2.Canny(img,170,200)//edge3는 minVal,maxVal을 각각 170,200으로 두고 Canny 알고리즘을 구동했다.

	cv2.imshow('original',img)
	cv2.imshow('Canny Edge1',img)
	cv2.imshow('Canny Edge2',img)
	cv2.imshow('Canny Edge3',img)

	cv2.waitKey(0)
	cv2.destroyAllWindow()

canny()


