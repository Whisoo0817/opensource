#include<stdio.h>
int main(void)
{

	double light_speed=300000;
	double distance=149600000;

	double time;
	int minute,second;
	time=distance/light_speed;
	int time2=time;
	minute=time/60;
	second=time2%60;

	printf("빛의 속도는 %f km/s \n", light_speed);
	printf("태양과 지구와의 거리 %f km \n", distance);
	printf("도달 시간은 %d 분 %d 초 \n",minute,second);

	return 0;
}
