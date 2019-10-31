import cv2
img_canny = cv2.Canny(image,threshold1,threshold2,edged=None,apertureSize=None,L2gradient=None)
// argument_1은 image 입력 이미지
// argument_2,3은 최소 스레숄드와 최대 스레숄드
// argument_4는 edges에 Canny 결과를 저장할 변수를 적어준다. 파이썬에서 Canny 함수 리턴으로 받을 수 있기 때문에 필요업는 항목이다.
// argument_5은 apertureSize는 이미지 그레디언트를 구할때 사용하는 소벨 커널 크기다. 디폴트는 3이다.
// argument_6은 L2gradient가 True이면 그레디언트 크기를 계산할 때 sqrt{(dl/dx)^2+(dl/dy)^2}를 사용한다. False라면 근삿값인 |dl/dx|+|dl/dy|를 사용한다. 디폴트값은 False이다.  
